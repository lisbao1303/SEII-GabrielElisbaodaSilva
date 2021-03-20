import csv

html_output = ''

names = []

with open('patrons.csv','r') as data_file:
    csv_data = csv.DictReader(data_file)


    next(csv_data)

    for line in csv_data:
        if line['FirstName'] == 'No Reward':
            break
        names.append()