num1=int(input("Enter the number:"))
num2=int(input("Enter thr number:"))
result=num1/num2
     except ZeroDivisonError:
     print("Error:cannot divide by zero.")
     except valueError:
     print("Error:Invalid input.plaese enter numbers only.")
else:
    print("Result is:",result)
finally:
    print("Execution completed.")            
