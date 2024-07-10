for i in {1..11}
do
	echo "processing input $i"
	cat herdle/$i.in | python herdle.py | diff herdle/$i.out -
done
