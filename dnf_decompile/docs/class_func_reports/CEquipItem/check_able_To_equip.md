# check_able_To_equip

`_ZN10CEquipItem19check_able_To_equipEcii`

`CEquipItem::check_able_To_equip(char, int, int)`

| 类 | 地址 |
|---|---|
| `CEquipItem` | `0x085108fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085108fc  _ZN10CEquipItem19check_able_To_equipEcii
#           CEquipItem::check_able_To_equip(char, int, int)
# range [0x085108fc, 0x08510989]
085108fc +0x00:  push   %ebp
085108fd +0x01:  mov    %esp,%ebp
085108ff +0x03:  sub    $0x28,%esp
08510902 +0x06:  mov    0xc(%ebp),%eax
08510905 +0x09:  mov    %al,-0xc(%ebp)
08510908 +0x0c:  mov    0x8(%ebp),%eax
0851090b +0x0f:  mov    %eax,(%esp)
0851090e +0x12:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08510913 +0x17:  test   %al,%al
08510915 +0x19:  je     0851091e <+0x22>
08510917 +0x1b:  mov    $0x1,%eax
0851091c +0x20:  jmp    08510987 <+0x8b>
0851091e +0x22:  movsbl -0xc(%ebp),%eax
08510922 +0x26:  mov    %eax,0x4(%esp)
08510926 +0x2a:  mov    0x8(%ebp),%eax
08510929 +0x2d:  mov    %eax,(%esp)
0851092c +0x30:  call   085108c6 <_ZNK10CEquipItem11check_eTypeEc>  ; CEquipItem::check_eType(char) const
08510931 +0x35:  xor    $0x1,%eax
08510934 +0x38:  test   %al,%al
08510936 +0x3a:  je     0851093f <+0x43>
08510938 +0x3c:  mov    $0x17,%eax
0851093d +0x41:  jmp    08510987 <+0x8b>
0851093f +0x43:  mov    0x10(%ebp),%eax
08510942 +0x46:  movsbl %al,%edx
08510945 +0x49:  mov    0x8(%ebp),%eax
08510948 +0x4c:  mov    %edx,0x4(%esp)
0851094c +0x50:  mov    %eax,(%esp)
0851094f +0x53:  call   0850d728 <_ZNK5CItem14check_job_typeEc>  ; CItem::check_job_type(char) const
08510954 +0x58:  xor    $0x1,%eax
08510957 +0x5b:  test   %al,%al
08510959 +0x5d:  je     08510962 <+0x66>
0851095b +0x5f:  mov    $0x8,%eax
08510960 +0x64:  jmp    08510987 <+0x8b>
08510962 +0x66:  mov    0x8(%ebp),%eax
08510965 +0x69:  mov    0x14(%ebp),%edx
08510968 +0x6c:  mov    %edx,0x4(%esp)
0851096c +0x70:  mov    %eax,(%esp)
0851096f +0x73:  call   084e95bc <_GLOBAL__I__Z7getUserj+0x56e>  ; global constructors keyed to getUser(unsigned int)+0x56e
08510974 +0x78:  xor    $0x1,%eax
08510977 +0x7b:  test   %al,%al
08510979 +0x7d:  je     08510982 <+0x86>
0851097b +0x7f:  mov    $0xe,%eax
08510980 +0x84:  jmp    08510987 <+0x8b>
08510982 +0x86:  mov    $0x0,%eax
08510987 +0x8b:  leave
08510988 +0x8c:  ret
08510989 +0x8d:  nop
```

## 反编译 C

```c
// CEquipItem::check_able_To_equip @ 0x85108fc

/* CEquipItem::check_able_To_equip(char, int, int) */

undefined4 __thiscall
CEquipItem::check_able_To_equip(CEquipItem *this,char param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = CItem::is_stackable((CItem *)this);
  if (cVar1 == '\0') {
    cVar1 = check_eType(this,param_1);
    if (cVar1 == '\x01') {
      cVar1 = CItem::check_job_type((CItem *)this,(char)param_2);
      if (cVar1 == '\x01') {
        cVar1 = CItem::check_low_level((CItem *)this,param_3);
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = 0xe;
        }
      }
      else {
        uVar2 = 8;
      }
    }
    else {
      uVar2 = 0x17;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
