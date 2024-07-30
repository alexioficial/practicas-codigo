from flask import Flask

app = Flask(__name__)

@app.route('/')
def index():
    return 'Hola'

@app.route('/<num1>+<num2>')
def sumar(num1, num2):
    num1 = int(num1)
    num2 = int(num2)
    return str(num1 + num2)