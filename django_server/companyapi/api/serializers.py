"""
Serialization
-------------

Convert the complex data query to json or xml for website.
Complex dataquery -> python dictionary -> json | xml
"""


from rest_framework import serializers
from .models import Company, Employee  # .models -> ./models.py


class CompanySerializer(serializers.HyperlinkedModelSerializer):
    """
    Company Model's Serializer
    Args:
      This class is child of `serializers.HyperlinkedModelSerialzier`
    """

    company_id = serializers.ReadOnlyField()

    class Meta:
        """
        Here we can explain the model detail which we'll be using
        It is same as meta data in markdown
        """

        model = Company
        fields = "__all__"  # include all the field of company model


class EmployeeSerializer(serializers.HyperlinkedModelSerializer):
    """
    Employee Model's Serializer
    """

    employee_id = serializers.ReadOnlyField()

    class Meta:
        """
        Employee Meta data.
        """

        model = Employee
        fields = "__all__"
