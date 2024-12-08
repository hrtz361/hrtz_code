try:
    import maths as toans
except ImportError as khonghecotoan:
    print(khonghecotoan)


try:
    with open("tests.txt") as fobj:
        inra = fobj.read(10)

except FileNotFoundError as khonghecofile:
    print(khonghecofile)
    print("khonghecofile")
