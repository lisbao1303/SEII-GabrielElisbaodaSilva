import os

os.chdir('/Users/Default/Desktop')
for f in os.listdir():

    f_name, f_ext = os.path.splitext(f)

    f_title, f_course, f_number = file_name.split('-')

    f_title = f_title.strip()
    f_course = f_course.strip()
    f_number = f_number.strip()[1:].zfill(2)

    new_name = '{}-{}{}'.format(f_number, f_title, file_ext)
    os.rename(file_name, new_name)
    print('{}-{}{}'.format(f_number, f_title.strip(), file_ext.strip()))

