# getToday

`_ZN6CBingo8getTodayEli`

`CBingo::getToday(long, int)`

| 类 | 地址 |
|---|---|
| `CBingo` | `0x080ca942` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ca942  _ZN6CBingo8getTodayEli
#           CBingo::getToday(long, int)
# range [0x080ca942, 0x080ca9b7]
080ca942 +0x00:  push   %ebp
080ca943 +0x01:  mov    %esp,%ebp
080ca945 +0x03:  sub    $0x88,%esp
080ca94b +0x09:  mov    0xc(%ebp),%eax
080ca94e +0x0c:  sub    $&_ZL14gUnicodeBuffer+0xac54,%eax
080ca953 +0x11:  mov    %eax,-0x14(%ebp)
080ca956 +0x14:  lea    -0x40(%ebp),%eax
080ca959 +0x17:  mov    %eax,0x4(%esp)
080ca95d +0x1b:  lea    0xc(%ebp),%eax
080ca960 +0x1e:  mov    %eax,(%esp)
080ca963 +0x21:  call   0807e360 <_init+0xc58>
080ca968 +0x26:  mov    %eax,-0x10(%ebp)
080ca96b +0x29:  lea    -0x6c(%ebp),%eax
080ca96e +0x2c:  mov    %eax,0x4(%esp)
080ca972 +0x30:  lea    -0x14(%ebp),%eax
080ca975 +0x33:  mov    %eax,(%esp)
080ca978 +0x36:  call   0807e360 <_init+0xc58>
080ca97d +0x3b:  mov    %eax,-0xc(%ebp)
080ca980 +0x3e:  mov    -0x10(%ebp),%eax
080ca983 +0x41:  mov    0x8(%eax),%eax
080ca986 +0x44:  test   %eax,%eax
080ca988 +0x46:  js     080ca9a3 <+0x61>
080ca98a +0x48:  mov    -0x10(%ebp),%eax
080ca98d +0x4b:  mov    0x8(%eax),%eax
080ca990 +0x4e:  cmp    0x10(%ebp),%eax
080ca993 +0x51:  jge    080ca9a3 <+0x61>
080ca995 +0x53:  mov    -0xc(%ebp),%eax
080ca998 +0x56:  mov    0xc(%eax),%edx
080ca99b +0x59:  mov    0x8(%ebp),%eax
080ca99e +0x5c:  mov    %edx,0x18(%eax)
080ca9a1 +0x5f:  jmp    080ca9af <+0x6d>
080ca9a3 +0x61:  mov    -0x10(%ebp),%eax
080ca9a6 +0x64:  mov    0xc(%eax),%edx
080ca9a9 +0x67:  mov    0x8(%ebp),%eax
080ca9ac +0x6a:  mov    %edx,0x18(%eax)
080ca9af +0x6d:  mov    0x8(%ebp),%eax
080ca9b2 +0x70:  mov    0x18(%eax),%eax
080ca9b5 +0x73:  leave
080ca9b6 +0x74:  ret
080ca9b7 +0x75:  nop
```

## 反编译 C

```c
// CBingo::getToday @ 0x80ca942

/* CBingo::getToday(long, int) */

undefined4 __thiscall CBingo::getToday(CBingo *this,long param_1,int param_2)

{
  tm *ptVar1;
  tm local_70;
  tm local_44;
  int local_18;
  tm *local_14;
  
  local_18 = param_1 + -0x15180;
  local_14 = localtime_r(&param_1,&local_44);
  ptVar1 = localtime_r(&local_18,&local_70);
  if ((local_14->tm_hour < 0) || (param_2 <= local_14->tm_hour)) {
    *(int *)(this + 0x18) = local_14->tm_mday;
  }
  else {
    *(int *)(this + 0x18) = ptVar1->tm_mday;
  }
  return *(undefined4 *)(this + 0x18);
}
```
