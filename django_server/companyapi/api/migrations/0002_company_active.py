# Generated by Django 4.1.7 on 2023-02-25 23:42

from django.db import migrations, models


class Migration(migrations.Migration):
    dependencies = [
        ("api", "0001_initial"),
    ]

    operations = [
        migrations.AddField(
            model_name="company",
            name="active",
            field=models.BooleanField(default=True),
        ),
    ]
