from django.urls import path
from . import views  # from current folder "playground" import views.py


urlpatterns = [
    # Always end the route with "/"
    path("hello/", views.say_hello)
]
