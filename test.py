data = """<001>On the job training at Hishtil Plant Nursery company, Sderpt Elizer Ben Yuhuda 92, Ashkelon, Israel<002>Villanueva, Junnalyn Gorom<003>Central Bicol State University of Agriculture<004>Bachelor of Science in Agriculture ( Agronomy)<005>2021<006>78 p.<007>TDSAgSc 634.5 V7123 2021<008>T0007580<009>English<0010>TDS<0011>15071<0012>On the job training - Hishtil Plant Nursery Company - Sderot Elizer Ben Yuhuda 92, Ashkelon, Israel<0013>On-The-Job Training gives a whole new vision of what
really learning is all about. It is one of the best ways where
the students can experience the actual field situations and
learn how everything works. Actual field training is really
necessary in improving and developing the skills and
capability of students along with what is being learn in the
school. Knowing and following the proper techniques of the
modern way of farming greatly affects the output of the
farmer.
The student intern was able to enhance her theoretical
and practical skills in different fields in agricultural
production wherein she got the chance to performed grafting
of grapes, watermelon, cucumber and tomato, planting of
basil, grafted watermelon and cucumber, sorting of
watermelon, cucumber, tomato, grapes, basil and pepper,
thinning of seedlings, seed sowing, propagating of scion and
rootstock of grapes, transplanting of grape seedlings,
pruning of grape plants, and cleaning of grapes. She was able
to apply the theoretical knowledge and principles that she
learned in classroom with actual farm situations and
conditions. The student intern acquired on farm work
61
experience, good work values and ethics and she also developed
camaraderie between Filipino students and those from other
countries.
Within the duration of the internship program the
student intern was given the opportunity to visit the
different biblical places and popular destinations in Israel
like Nazareth, Sea of Galilee, Bethlehem, Jericho, Mount
Hermon, Mount of Temptation and Dead Sea.
Being passionate in what you do and keeping yourself
motivated plays an important role in achieving oneÃ¢â‚¬â„¢s goal in
life especially in this time of pandemic. It just shows how
important is agriculture not just for the farmers but for all
of us because despite of the frightening situations farmers
and all the people who works in agriculture sector continue
to do their jobs in order to feed the nation.
Aside from the modern way of farming being industrious,
always giving your best, managing your time wisely, being
confident, making good decisions in life, spending wisely,
being versatile in work and in dealing with other people, not
giving up even in the toughest times and always asking GodÃ¢â‚¬â„¢s
guidance and always thanking Him for everything are the things
that the student intern learned while having her internship
in Israel.<0014>1<0015>1<0016>0<0017>Thesis<0018><0019><0020>"""

# Find the start and end index of the content to be replaced
start_index = data.find("<007>")
end_index = data.find("<008>", start_index)

# Replace the content with the new value
if start_index != -1 and end_index != -1:
    new_content = "<007>Edited<008>"
    data = data[:start_index] + new_content + data[end_index + len("<008>"):]

# Print the updated data
print(data)
