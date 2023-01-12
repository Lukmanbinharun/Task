from datetime import datetime
import uuid

class Task:
    all_task = []
    incompleted = []
    def __init__(self,name):
        self.name = name
        self.created_time = datetime.now()
        self.updated_time = "NA"
        self.is_completed = False
        self.completion_time = 'NA'
        self.id = str(uuid.uuid4())
        self.all_task.append(self)
        self.incompleted.append(self)
        print("\n\n Task cretated succesfully\n\n")

    def update_task(self,name):
        self.name = name
        self.updated_time = str(datetime.now())
    def completion(self):
        self.is_completed = True
        self.completion_time = str(datetime.now())
        Task.incompleted.remove(self)
    @staticmethod
    def Show(item):
            print("----------------------------------\n")
            print(f'Id = {item.id}')
            print(f'Task = {item.name}')
            print(f'Created time = {item.created_time}')
            print(f'Updated time = {item.updated_time}')
            print(f'Completed = {item.is_completed}')
            print(f'Completed time = {item.completion_time}')
            print("\n\n") 
    @staticmethod
    def show_all():
        for item in Task.all_task:
            Task.Show(item)
    @staticmethod
    def show_incompleted():
        c = 1
        for item in Task.incompleted:
            print(f'Task NO : {c}\n')
            c += 1
            Task.Show(item)
        if(c == 1):
            print("\n NO Incompleted task\n")
    @staticmethod
    def show_completed():
        c = 0
        for item in Task.all_task:
            if(item.is_completed == True):
                Task.Show(item)
                c += 1
        if(c == 0):
            print("\n No task completed\n")

           







while(True):
    print("1. Add a new task")
    print("2. Show all task")
    print("3. Show Incompleted task")
    print("4. Show Completed task")
    print("5. Update task")
    print("6. Mark a task completed")
    print("Enter opshion :")
    a = int(input())
    if(a ==1):
        name = input("Enter new task : ")
        Task(name)
    elif(a == 2):
        Task.show_all()
    elif(a == 3):
        Task.show_incompleted()
    elif(a == 4):
        Task.show_completed()
    elif(a == 5):
        Task.show_incompleted()
        t = int(input("Selected any task no : "))
        s = input("Enter new task : ")
        Task.update_task(Task.incompleted[t-1],s)
    elif(a == 6):
        Task.show_incompleted()
        t = int(input("Selected any task no : "))
        Task.completion(Task.incompleted[t-1])


    






"""
1
Hi
1
Good By
2


"""