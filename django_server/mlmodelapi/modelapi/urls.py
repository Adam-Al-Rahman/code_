"""
Model API URL
"""

from django.urls import path
from modelapi import views

urlpatterns = [
    path("", views.index),
    path("predict", views.predict_patient_status),
]
