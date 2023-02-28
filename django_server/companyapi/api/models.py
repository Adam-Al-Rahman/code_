"""
Api models
"""

from django.db import models


class Company(models.Model):
    """
    Company model to interact with database
    """

    company_id = models.AutoField(primary_key=True)
    name = models.CharField(max_length=72)
    location = models.CharField(max_length=72)
    about = models.TextField()
    types = models.CharField(
        max_length=100,
        choices=(
            ("IT", "Software IT"),
            ("Non IT", "Medical"),
        ),
    )
    added_date = models.DateTimeField(auto_now=True)
    active = models.BooleanField(default=True)

    def __str__(self):
        """
        Instead of show Company 1, Company 2 in employee\n
        We can show them the name of the company directly
        """
        return f"{(self.name)}"


class Employee(models.Model):
    """
    Employee model to interact with database and use foreign key to company
    """

    name = models.CharField(max_length=100)
    email = models.CharField(max_length=100)
    address = models.CharField(max_length=150)
    phone = models.IntegerField()
    about = models.TextField()
    occupation = models.CharField(
        max_length=50,
        choices=(
            ("Manager", "Company Manager"),
            ("Developer", "Software Developer"),
            ("Developer", "Hardware Developer"),
            ("Doctor", "Heart Doctor"),
        ),
    )
    company = models.ForeignKey(Company, on_delete=models.CASCADE)
