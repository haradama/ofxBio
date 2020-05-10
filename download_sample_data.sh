mkdir -p ./bin/data/fna

ACCESSIONs=(NC_005088)
echo ${ACCESSIONs[@]}
for ACCESSION in ${ACCESSIONs[@]}; do
    curl -L "https://eutils.ncbi.nlm.nih.gov/entrez/eutils/efetch.fcgi?db=nuccore&id=$ACCESSION&rettype=fasta&retmode=text" > ./bin/data/fna/$ACCESSION.fna
done
