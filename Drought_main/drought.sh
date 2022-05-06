for i in {1..15}
do
	echo "processing input $i"
	cat drought/$i.in | python drought.py | diff drought/$i.out -
done
