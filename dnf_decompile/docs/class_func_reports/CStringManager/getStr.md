# getStr

`_ZN14CStringManager6getStrEi`

`CStringManager::getStr(int)`

| 类 | 地址 |
|---|---|
| `CStringManager` | `0x08ac35f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac35f8  _ZN14CStringManager6getStrEi
#           CStringManager::getStr(int)
# range [0x08ac35f8, 0x08ac36d1]
08ac35f8 +0x00:  push   %ebp
08ac35f9 +0x01:  mov    %esp,%ebp
08ac35fb +0x03:  push   %esi
08ac35fc +0x04:  push   %ebx
08ac35fd +0x05:  sub    $0x20,%esp
08ac3600 +0x08:  movzbl &_ZL12is_sr_loaded,%eax
08ac3607 +0x0f:  xor    $0x1,%eax
08ac360a +0x12:  test   %al,%al
08ac360c +0x14:  je     08ac366c <+0x74>
08ac360e +0x16:  lea    -0x10(%ebp),%eax
08ac3611 +0x19:  mov    %eax,(%esp)
08ac3614 +0x1c:  call   08ad69aa <_ZN10CharStringC1Ev>  ; CharString::CharString()
08ac3619 +0x21:  lea    -0x10(%ebp),%eax
08ac361c +0x24:  mov    %eax,(%esp)
08ac361f +0x27:  call   08ac35cc <_Z10loadStringP10CharString>  ; loadString(CharString*)
08ac3624 +0x2c:  test   %al,%al
08ac3626 +0x2e:  je     08ac3636 <+0x3e>
08ac3628 +0x30:  movb   $0x1,&_ZL12is_sr_loaded
08ac362f +0x37:  mov    $0x1,%esi
08ac3634 +0x3c:  jmp    08ac365d <+0x65>
08ac3636 +0x3e:  mov    $0x0,%ebx
08ac363b +0x43:  mov    $0x0,%esi
08ac3640 +0x48:  jmp    08ac365d <+0x65>
08ac3642 +0x4a:  mov    %edx,%ebx
08ac3644 +0x4c:  mov    %eax,%esi
08ac3646 +0x4e:  lea    -0x10(%ebp),%eax
08ac3649 +0x51:  mov    %eax,(%esp)
08ac364c +0x54:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ac3651 +0x59:  mov    %esi,%eax
08ac3653 +0x5b:  mov    %ebx,%edx
08ac3655 +0x5d:  mov    %eax,(%esp)
08ac3658 +0x60:  call   08ae3750 <_Unwind_Resume>
08ac365d +0x65:  lea    -0x10(%ebp),%eax
08ac3660 +0x68:  mov    %eax,(%esp)
08ac3663 +0x6b:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ac3668 +0x70:  test   %esi,%esi
08ac366a +0x72:  je     08ac36c9 <+0xd1>
08ac366c +0x74:  call   08ad5439 <_ZN3app14stringResourceEv>  ; app::stringResource()
08ac3671 +0x79:  lea    -0xc(%ebp),%edx
08ac3674 +0x7c:  mov    %edx,0x8(%esp)
08ac3678 +0x80:  mov    0x8(%ebp),%edx
08ac367b +0x83:  mov    %edx,0x4(%esp)
08ac367f +0x87:  mov    %eax,(%esp)
08ac3682 +0x8a:  call   08ad4878 <_ZNK14StringResource3getEiPPK10CharString>  ; StringResource::get(int, CharString const**) const
08ac3687 +0x8f:  test   %al,%al
08ac3689 +0x91:  je     08ac369a <+0xa2>
08ac368b +0x93:  mov    -0xc(%ebp),%eax
08ac368e +0x96:  mov    %eax,(%esp)
08ac3691 +0x99:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ac3696 +0x9e:  mov    %eax,%ebx
08ac3698 +0xa0:  jmp    08ac36c9 <+0xd1>
08ac369a +0xa2:  mov    0x8(%ebp),%eax
08ac369d +0xa5:  mov    %eax,0x8(%esp)
08ac36a1 +0xa9:  movl   $"getStr(%d) == none",0x4(%esp)
08ac36a9 +0xb1:  mov    %gs:0x0,%eax
08ac36af +0xb7:  lea    -&_ZL12gTCharBuffer+0x9b18(%eax),%eax
08ac36b5 +0xbd:  mov    %eax,(%esp)
08ac36b8 +0xc0:  call   08ac36de <_ZN14CStringManager23setStringResourceLoadedEv+0xc>  ; CStringManager::setStringResourceLoaded()+0xc
08ac36bd +0xc5:  mov    %gs:0x0,%eax
08ac36c3 +0xcb:  lea    -&_ZL12gTCharBuffer+0x9b18(%eax),%ebx
08ac36c9 +0xd1:  mov    %ebx,%eax
08ac36cb +0xd3:  add    $0x20,%esp
08ac36ce +0xd6:  pop    %ebx
08ac36cf +0xd7:  pop    %esi
08ac36d0 +0xd8:  pop    %ebp
08ac36d1 +0xd9:  ret
```

## 反编译 C

```c
// CStringManager::getStr @ 0x8ac35f8

/* CStringManager::getStr(int) */

char * CStringManager::getStr(int param_1)

{
  char cVar1;
  StringResource *this;
  char *pcVar2;
  char *unaff_EBX;
  int *in_GS_OFFSET;
  int in_stack_ffffffd8;
  CharString local_14;
  CharString *local_10;
  
  if (is_sr_loaded != '\x01') {
    CharString::CharString(&local_14);
                    /* try { // try from 08ac361f to 08ac3623 has its CatchHandler @ 08ac3642 */
    cVar1 = loadString((CharString *)&local_14);
    if (cVar1 == '\0') {
      unaff_EBX = (char *)0x0;
    }
    else {
      is_sr_loaded = '\x01';
    }
    CharString::~CharString(&local_14,in_stack_ffffffd8);
    if (cVar1 == '\0') {
      return unaff_EBX;
    }
  }
  this = (StringResource *)app::stringResource();
  cVar1 = StringResource::get(this,param_1,(CharString **)&local_10);
  if (cVar1 == '\0') {
    ss_sprintf<32u>((char *)(*in_GS_OFFSET + -0x3c048),"getStr(%d) == none",param_1);
    pcVar2 = (char *)(*in_GS_OFFSET + -0x3c048);
  }
  else {
    pcVar2 = CharString::c_str(local_10);
  }
  return pcVar2;
}
```
