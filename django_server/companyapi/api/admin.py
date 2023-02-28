"""
Provide access of this app models to admin

Access admin in browser by
.../admin/
"""

from django.contrib import admin

from .models import Company, Employee


class CompanyAdmin(admin.ModelAdmin):
    """
    Customization of Company model Admin page
    """

    list_display = ("name", "location", "types")
    search_fields = ("name",)


class EmployeeAdmin(admin.ModelAdmin):
    """
    Customization of Company model Admin page
    """

    list_display = ("name", "email", "company")


# Register your models here.

admin.site.register(Company, CompanyAdmin)
admin.site.register(Employee, EmployeeAdmin)
