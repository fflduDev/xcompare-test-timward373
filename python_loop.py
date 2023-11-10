import time

# get starting time
start = time.time()

j = 0

#do something in the loop - assign i to j as print takes too long
for i in range(100000000):
    j = i
    #print( 'current i: ', i)

# get time taken to run the for loop code 
elapsed_time_fl = (time.time() - start) 
print('elapsed_time_fl: ', elapsed_time_fl)
