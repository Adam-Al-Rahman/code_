"""
views.py is a `Request Handler`.
A handler, or request handler, is a program that receives a client request
for access to the service, and translates the request into a form that the service can understand.
"""

from django.shortcuts import render
from django.http import HttpResponse
from django.http import HttpRequest


def calculate() -> int:
    """
    Hello world return
    """
    x = 1
    y = 2
    return x + y


def say_hello(request: HttpRequest) -> HttpResponse:
    """
    From server sending hello.html to client
    Args:
      request: This parameter is passed by the client to this function
    """
    x = calculate()
    return render(request, "hello.html", {"name": "King"})
