# LoadADExposeInfoAtApp

`_ZN27CInGameAdvertisementManager21LoadADExposeInfoAtAppEv`

`CInGameAdvertisementManager::LoadADExposeInfoAtApp()`

| 类 | 地址 |
|---|---|
| `CInGameAdvertisementManager` | `0x080fd83c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080fd83c  _ZN27CInGameAdvertisementManager21LoadADExposeInfoAtAppEv
#           CInGameAdvertisementManager::LoadADExposeInfoAtApp()
# range [0x080fd83c, 0x080fd8e3]
080fd83c +0x00:  push   %ebp
080fd83d +0x01:  mov    %esp,%ebp
080fd83f +0x03:  sub    $0x67b88,%esp
080fd845 +0x09:  movl   $0x67b60,0x8(%esp)
080fd84d +0x11:  movl   $0xff,0x4(%esp)
080fd855 +0x19:  lea    -0x67b6c(%ebp),%eax
080fd85b +0x1f:  mov    %eax,(%esp)
080fd85e +0x22:  call   0807dcc0 <_init+0x5b8>
080fd863 +0x27:  lea    -0x67b6c(%ebp),%eax
080fd869 +0x2d:  mov    %eax,0x4(%esp)
080fd86d +0x31:  mov    0x8(%ebp),%eax
080fd870 +0x34:  mov    %eax,(%esp)
080fd873 +0x37:  call   080fd19e <_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition>  ; CInGameAdvertisementManager::queryADExposeInfo(stInGameADExposeCondition*)
080fd878 +0x3c:  test   %al,%al
080fd87a +0x3e:  je     080fd8dd <+0xa1>
080fd87c +0x40:  movl   $0x0,-0xc(%ebp)
080fd883 +0x47:  jmp    080fd8c5 <+0x89>
080fd885 +0x49:  mov    -0xc(%ebp),%eax
080fd888 +0x4c:  imul   $0x84c,%eax,%eax
080fd88e +0x52:  lea    -0x8(%ebp),%edx
080fd891 +0x55:  lea    (%edx,%eax,1),%eax
080fd894 +0x58:  sub    $0x67954,%eax
080fd899 +0x5d:  mov    (%eax),%eax
080fd89b +0x5f:  cmp    $0xffffffff,%eax
080fd89e +0x62:  je     080fd8d5 <+0x99>
080fd8a0 +0x64:  mov    -0xc(%ebp),%eax
080fd8a3 +0x67:  lea    -0x67b6c(%ebp),%edx
080fd8a9 +0x6d:  imul   $0x84c,%eax,%eax
080fd8af +0x73:  lea    (%edx,%eax,1),%eax
080fd8b2 +0x76:  mov    %eax,0x4(%esp)
080fd8b6 +0x7a:  mov    0x8(%ebp),%eax
080fd8b9 +0x7d:  mov    %eax,(%esp)
080fd8bc +0x80:  call   080fd8e4 <_ZN27CInGameAdvertisementManager18InsertADExposeInfoER25stInGameADExposeCondition>  ; CInGameAdvertisementManager::InsertADExposeInfo(stInGameADExposeCondition&)
080fd8c1 +0x85:  addl   $0x1,-0xc(%ebp)
080fd8c5 +0x89:  cmpl   $0xc7,-0xc(%ebp)
080fd8cc +0x90:  setle  %al
080fd8cf +0x93:  test   %al,%al
080fd8d1 +0x95:  jne    080fd885 <+0x49>
080fd8d3 +0x97:  jmp    080fd8d6 <+0x9a>
080fd8d5 +0x99:  nop
080fd8d6 +0x9a:  mov    $0x1,%eax
080fd8db +0x9f:  jmp    080fd8e2 <+0xa6>
080fd8dd +0xa1:  mov    $0x0,%eax
080fd8e2 +0xa6:  leave
080fd8e3 +0xa7:  ret
```

## 反编译 C

```c
// CInGameAdvertisementManager::LoadADExposeInfoAtApp @ 0x80fd83c

/* CInGameAdvertisementManager::LoadADExposeInfoAtApp() */

undefined4 __thiscall
CInGameAdvertisementManager::LoadADExposeInfoAtApp(CInGameAdvertisementManager *this)

{
  char cVar1;
  undefined4 uVar2;
  stInGameADExposeCondition asStack_67b70 [528];
  int aiStack_67960 [106068];
  int local_10;
  
  memset(asStack_67b70,0xff,0x67b60);
  cVar1 = queryADExposeInfo(this,asStack_67b70);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    for (local_10 = 0; (local_10 < 200 && (aiStack_67960[local_10 * 0x213] != -1));
        local_10 = local_10 + 1) {
      InsertADExposeInfo(this,asStack_67b70 + local_10 * 0x84c);
    }
    uVar2 = 1;
  }
  return uVar2;
}
```
