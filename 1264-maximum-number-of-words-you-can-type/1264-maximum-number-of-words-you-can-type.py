class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        broken=set(brokenLetters)
        count=0

        for word in text.split():
            if any(ch in broken for ch in word):
                continue
            else:
                count+=1
        return count