def reverse_words(string):
    arr = string.strip().split()

    n = len(arr)
    reverse(arr,0,n-1)

    return " ".join(arr)
def reverse(arr,i,j):

    while i < j :
        arr[i] , arr[j] = arr[j] , arr[i]
        i+=1
        j-=1

if __name__ == "__main__":

    string = "Hi There you know me by my moves - 619"
    print(reverse_words(string))
    
