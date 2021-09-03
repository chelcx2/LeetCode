def compareVersion(version1: str, version2: str) -> int:
    v1 = [int(i) for i in version1.split('.')]
    v2 = [int(i) for i in version2.split('.')]
    for idx in range(max(len(v1), len(v2))):
        try:
            if v1[idx] > v2[idx]:
                return 1
            if v1[idx] < v2[idx]:
                return -1
        except:
            if len(v1) > len(v2) and v1[idx] == 0:
                continue
            if len(v1) > len(v2) and v1[idx] != 0:
                return 1
            if len(v1) < len(v2) and v2[idx] == 0:
                continue
            if len(v1) < len(v2) and v2[idx] != 0:
                return -1

                
    return 0

print(compareVersion(version1 = "1.01", version2 = "1.001"))
print(compareVersion(version1 = "1.0", version2 = "1.0.0"))
print(compareVersion(version1 = "0.1", version2 = "1.1"))
print(compareVersion(version1 = "1.0.1", version2 = "1"))
print(compareVersion(version1 = "7.5.2.4", version2 = "7.5.3"))