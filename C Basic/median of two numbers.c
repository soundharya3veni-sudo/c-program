int lengthOfLongestSubstring(char *s)
{
    int last[256];
        int i, start = 0, maxlen = 0;

            for(i = 0; i < 256; i++)
                {
                        last[i] = -1;
                            }

                                for(i = 0; s[i] != '\0'; i++)
                                    {
                                            if(last[s[i]] >= start)
                                                    {
                                                                start = last[s[i]] + 1;
                                                                        }

                                                                                last[s[i]] = i;

                                                                                        if(i - start + 1 > maxlen)
                                                                                                {
                                                                                                            maxlen = i - start + 1;
                                                                                                                    }
                                                                                                                        }

                                                                                                                            return maxlen;
                                                                                                                            }
