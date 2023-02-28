"""
Request Handler
--------------
"""

from rest_framework import viewsets
from rest_framework.decorators import action
from rest_framework.response import Response

from .models import Company, Employee
from .serializers import CompanySerializer, EmployeeSerializer


class CompanyViewSet(viewsets.ModelViewSet):
    """
    Company Model Request Handler class
    It is child of ModelViewSet class which provide funtion to handle
    """

    queryset = Company.objects.all()
    serializer_class = CompanySerializer

    # url: companies/{companyId}/employees
    @action(detail=True, methods=["get"])
    def employees(self, request, pk=None):
        """
        Access all the employees in a company of primary_key
        """
        try:
            company = Company.objects.get(pk=pk)
            emps = Employee.objects.filter(company=company)
            emps_serializer = EmployeeSerializer(
                emps, many=True, context={"request": request}
            )
            return Response(emps_serializer.data)
        except Exception as ex:
            print(f"Error\n{ex}")
            return Response({"message": f"{ex}"})


class EmployeeViewSet(viewsets.ModelViewSet):
    """
    Employee View Set
    """

    queryset = Employee.objects.all()
    serializer_class = EmployeeSerializer
