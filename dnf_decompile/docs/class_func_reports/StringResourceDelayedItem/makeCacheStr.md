# makeCacheStr

`_ZN25StringResourceDelayedItem12makeCacheStrEv`

`StringResourceDelayedItem::makeCacheStr()`

| 类 | 地址 |
|---|---|
| `StringResourceDelayedItem` | `0x08ad538a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad538a  _ZN25StringResourceDelayedItem12makeCacheStrEv
#           StringResourceDelayedItem::makeCacheStr()
# range [0x08ad538a, 0x08ad5438]
08ad538a +0x00:  push   %ebp
08ad538b +0x01:  mov    %esp,%ebp
08ad538d +0x03:  push   %esi
08ad538e +0x04:  push   %ebx
08ad538f +0x05:  sub    $0x20,%esp
08ad5392 +0x08:  lea    -0x10(%ebp),%eax
08ad5395 +0x0b:  mov    %eax,0x4(%esp)
08ad5399 +0x0f:  mov    0x8(%ebp),%eax
08ad539c +0x12:  mov    %eax,(%esp)
08ad539f +0x15:  call   08ad5302 <_ZNK25StringResourceDelayedItem3getEPPK10CharString>  ; StringResourceDelayedItem::get(CharString const**) const
08ad53a4 +0x1a:  test   %al,%al
08ad53a6 +0x1c:  je     08ad53bf <+0x35>
08ad53a8 +0x1e:  mov    -0x10(%ebp),%eax
08ad53ab +0x21:  mov    0x8(%ebp),%edx
08ad53ae +0x24:  add    $0x4,%edx
08ad53b1 +0x27:  mov    %eax,0x4(%esp)
08ad53b5 +0x2b:  mov    %edx,(%esp)
08ad53b8 +0x2e:  call   08ad70de <_ZN10CharStringaSERKS_>  ; CharString::operator=(CharString const&)
08ad53bd +0x33:  jmp    08ad541c <+0x92>
08ad53bf +0x35:  mov    0x8(%ebp),%eax
08ad53c2 +0x38:  mov    0xc(%eax),%edx
08ad53c5 +0x3b:  lea    -0xc(%ebp),%eax
08ad53c8 +0x3e:  mov    %edx,0x8(%esp)
08ad53cc +0x42:  movl   $"getStr(%d) == none",0x4(%esp)
08ad53d4 +0x4a:  mov    %eax,(%esp)
08ad53d7 +0x4d:  call   08ad8afa <_ZN10CharString6formatEPKcz>  ; CharString::format(char const*, ...)
08ad53dc +0x52:  sub    $0x4,%esp
08ad53df +0x55:  mov    0x8(%ebp),%eax
08ad53e2 +0x58:  lea    0x4(%eax),%edx
08ad53e5 +0x5b:  lea    -0xc(%ebp),%eax
08ad53e8 +0x5e:  mov    %eax,0x4(%esp)
08ad53ec +0x62:  mov    %edx,(%esp)
08ad53ef +0x65:  call   08ad70de <_ZN10CharStringaSERKS_>  ; CharString::operator=(CharString const&)
08ad53f4 +0x6a:  jmp    08ad5411 <+0x87>
08ad53f6 +0x6c:  mov    %edx,%ebx
08ad53f8 +0x6e:  mov    %eax,%esi
08ad53fa +0x70:  lea    -0xc(%ebp),%eax
08ad53fd +0x73:  mov    %eax,(%esp)
08ad5400 +0x76:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad5405 +0x7b:  mov    %esi,%eax
08ad5407 +0x7d:  mov    %ebx,%edx
08ad5409 +0x7f:  mov    %eax,(%esp)
08ad540c +0x82:  call   08ae3750 <_Unwind_Resume>
08ad5411 +0x87:  lea    -0xc(%ebp),%eax
08ad5414 +0x8a:  mov    %eax,(%esp)
08ad5417 +0x8d:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad541c +0x92:  mov    0x8(%ebp),%eax
08ad541f +0x95:  add    $0x4,%eax
08ad5422 +0x98:  mov    %eax,(%esp)
08ad5425 +0x9b:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad542a +0xa0:  mov    0x8(%ebp),%edx
08ad542d +0xa3:  mov    %eax,(%edx)
08ad542f +0xa5:  lea    -0x8(%ebp),%esp
08ad5432 +0xa8:  add    $0x0,%esp
08ad5435 +0xab:  pop    %ebx
08ad5436 +0xac:  pop    %esi
08ad5437 +0xad:  pop    %ebp
08ad5438 +0xae:  ret
```

## 反编译 C

```c
// StringResourceDelayedItem::makeCacheStr @ 0x8ad538a

/* StringResourceDelayedItem::makeCacheStr() */

void __thiscall StringResourceDelayedItem::makeCacheStr(StringResourceDelayedItem *this)

{
  char cVar1;
  char *pcVar2;
  CharString *src;
  CharString *local_14;
  CharString local_10;
  
  cVar1 = get(this,(CharString **)&local_14);
  if (cVar1 == '\0') {
    CharString::format(&local_10,"getStr(%d) == none",*(undefined4 *)(this + 0xc));
    src = &local_10;
                    /* try { // try from 08ad53ef to 08ad53f3 has its CatchHandler @ 08ad53f6 */
    CharString::operator=((CharString *)(this + 4),src);
    CharString::~CharString(&local_10,(int)src);
  }
  else {
    CharString::operator=((CharString *)(this + 4),local_14);
  }
  pcVar2 = CharString::c_str((CharString *)(this + 4));
  *(char **)this = pcVar2;
  return;
}
```
