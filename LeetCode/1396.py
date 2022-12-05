class UndergroundSystem:

    def __init__(self):
        self.place = {}
        self.time = {}

    def checkIn(self, id1: int, stationName: str, t: int) -> None:
        self.time[id1] = (stationName, t)

    def checkOut(self, id1: int, stationName: str, t: int) -> None:
        res = self.time[id1]
        if ((res[0], stationName) in self.place):
            self.place[(res[0], stationName)] = (self.place[(res[0], stationName)][0] + t - res[1], self.place[(res[0], stationName)][1] + 1)
        else:
            self.place[(res[0], stationName)] = (t - res[1], 1)
            
    def getAverageTime(self, startStation: str, endStation: str) -> float:
        return self.place[(startStation, endStation)][0]/self.place[(startStation, endStation)][1]


# Your UndergroundSystem object will be instantiated and called as such:
# obj = UndergroundSystem()
# obj.checkIn(id,stationName,t)
# obj.checkOut(id,stationName,t)
# param_3 = obj.getAverageTime(startStation,endStation)
