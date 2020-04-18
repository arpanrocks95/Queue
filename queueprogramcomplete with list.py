class queue:
    def __init__(self):
        self.listq = []

    def enQueue(self, data):
        self.listq.append(data)

    def deQueue(self):
        if not self.listq:
            print("queue is empty ")
        else:
            self.listq.pop(0)

    def display(self):
        if not self.listq:
            print("queue is empty ")
        else:
            count = 1;
            for i in range(len(self.listq)):
                print("data in pos  {0} is {1}".format(count, self.listq[i]))
                count = count + 1


if __name__ == '__main__':
    q1 = queue()
    q1.enQueue(10)
    q1.enQueue(11)
    q1.enQueue(12)
    q1.enQueue(13)
    q1.display()
    q1.deQueue()
    q1.display()


