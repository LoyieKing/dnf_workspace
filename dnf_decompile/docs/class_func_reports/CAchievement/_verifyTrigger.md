# _verifyTrigger

`_ZN12CAchievement14_verifyTriggerEjttt`

`CAchievement::_verifyTrigger(unsigned int, unsigned short, unsigned short, unsigned short)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828b800` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828b800  _ZN12CAchievement14_verifyTriggerEjttt
#           CAchievement::_verifyTrigger(unsigned int, unsigned short, unsigned short, unsigned short)
# range [0x0828b800, 0x0828b895]
0828b800 +0x00:  push   %ebp
0828b801 +0x01:  mov    %esp,%ebp
0828b803 +0x03:  sub    $0x58,%esp
0828b806 +0x06:  mov    0x10(%ebp),%ecx
0828b809 +0x09:  mov    0x14(%ebp),%edx
0828b80c +0x0c:  mov    0x18(%ebp),%eax
0828b80f +0x0f:  mov    %cx,-0x3c(%ebp)
0828b813 +0x13:  mov    %dx,-0x40(%ebp)
0828b817 +0x17:  mov    %ax,-0x44(%ebp)
0828b81b +0x1b:  mov    0xc(%ebp),%eax
0828b81e +0x1e:  cmp    $0x198b,%eax
0828b823 +0x23:  je     0828b86c <+0x6c>
0828b825 +0x25:  cmp    $0x19c4,%eax
0828b82a +0x2a:  je     0828b835 <+0x35>
0828b82c +0x2c:  cmp    $0x1983,%eax
0828b831 +0x31:  je     0828b86c <+0x6c>
0828b833 +0x33:  jmp    0828b88f <+0x8f>
0828b835 +0x35:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0828b83c +0x3c:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0828b841 +0x41:  mov    %eax,-0xc(%ebp)
0828b844 +0x44:  lea    -0x38(%ebp),%eax
0828b847 +0x47:  mov    %eax,0x4(%esp)
0828b84b +0x4b:  lea    -0xc(%ebp),%eax
0828b84e +0x4e:  mov    %eax,(%esp)
0828b851 +0x51:  call   0807e360 <_init+0xc58>
0828b856 +0x56:  mov    -0x30(%ebp),%eax
0828b859 +0x59:  test   %eax,%eax
0828b85b +0x5b:  js     0828b88b <+0x8b>
0828b85d +0x5d:  mov    -0x30(%ebp),%eax
0828b860 +0x60:  cmp    $0x14,%eax
0828b863 +0x63:  jg     0828b88e <+0x8e>
0828b865 +0x65:  mov    $0x0,%eax
0828b86a +0x6a:  jmp    0828b894 <+0x94>
0828b86c +0x6c:  mov    0x8(%ebp),%eax
0828b86f +0x6f:  mov    0x8(%eax),%eax
0828b872 +0x72:  mov    %eax,(%esp)
0828b875 +0x75:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0828b87a +0x7a:  cmp    $0x45,%eax
0828b87d +0x7d:  setle  %al
0828b880 +0x80:  test   %al,%al
0828b882 +0x82:  je     0828b88f <+0x8f>
0828b884 +0x84:  mov    $0x0,%eax
0828b889 +0x89:  jmp    0828b894 <+0x94>
0828b88b +0x8b:  nop
0828b88c +0x8c:  jmp    0828b88f <+0x8f>
0828b88e +0x8e:  nop
0828b88f +0x8f:  mov    $0x1,%eax
0828b894 +0x94:  leave
0828b895 +0x95:  ret
```

## 反编译 C

```c
// CAchievement::_verifyTrigger @ 0x828b800

/* CAchievement::_verifyTrigger(unsigned int, unsigned short, unsigned short, unsigned short) */

undefined4 CAchievement::_verifyTrigger(uint param_1,ushort param_2,ushort param_3,ushort param_4)

{
  int iVar1;
  undefined2 in_stack_0000000a;
  tm local_3c;
  time_t local_10 [3];
  
  if (_param_2 != 0x198b) {
    if (_param_2 == 0x19c4) {
      local_10[0] = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      localtime_r(local_10,&local_3c);
      if (local_3c.tm_hour < 0) {
        return 1;
      }
      if (0x14 < local_3c.tm_hour) {
        return 1;
      }
      return 0;
    }
    if (_param_2 != 0x1983) {
      return 1;
    }
  }
  iVar1 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)(param_1 + 8));
  if (0x45 < iVar1) {
    return 1;
  }
  return 0;
}
```
