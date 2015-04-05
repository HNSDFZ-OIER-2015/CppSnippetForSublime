#
echo "Going to install..."
cd ~/.config/sublime*/Package
rm -rf ./CppSnippetForSublime
mkdir CppSnippetForSublime
#
echo "git clone..."
git clone https://github.com/Riteme/CppSnippetForSublime.git
#
echo "===========OK==========="
nano ./CppSnippetForSublime/README.md
