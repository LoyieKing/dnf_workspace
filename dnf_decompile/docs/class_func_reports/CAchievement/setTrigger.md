# setTrigger

`_ZN12CAchievement10setTriggerEjttt`

`CAchievement::setTrigger(unsigned int, unsigned short, unsigned short, unsigned short)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828b678` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828b678  _ZN12CAchievement10setTriggerEjttt
#           CAchievement::setTrigger(unsigned int, unsigned short, unsigned short, unsigned short)
# range [0x0828b678, 0x0828b7ff]
0828b678 +0x000:  push   %ebp
0828b679 +0x001:  mov    %esp,%ebp
0828b67b +0x003:  push   %ebx
0828b67c +0x004:  sub    $0x44,%esp
0828b67f +0x007:  mov    0x10(%ebp),%ecx
0828b682 +0x00a:  mov    0x14(%ebp),%edx
0828b685 +0x00d:  mov    0x18(%ebp),%eax
0828b688 +0x010:  mov    %cx,-0x1c(%ebp)
0828b68c +0x014:  mov    %dx,-0x20(%ebp)
0828b690 +0x018:  mov    %ax,-0x24(%ebp)
0828b694 +0x01c:  mov    0xc(%ebp),%ebx
0828b697 +0x01f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828b69c +0x024:  mov    %ebx,0x4(%esp)
0828b6a0 +0x028:  mov    %eax,(%esp)
0828b6a3 +0x02b:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0828b6a8 +0x030:  mov    %eax,-0xc(%ebp)
0828b6ab +0x033:  cmpl   $0x0,-0xc(%ebp)
0828b6af +0x037:  jne    0828b6d0 <+0x58>
0828b6b1 +0x039:  movl   $0x1,0x8(%esp)
0828b6b9 +0x041:  mov    0xc(%ebp),%eax
0828b6bc +0x044:  mov    %eax,0x4(%esp)
0828b6c0 +0x048:  mov    0x8(%ebp),%eax
0828b6c3 +0x04b:  mov    %eax,(%esp)
0828b6c6 +0x04e:  call   0828c252 <_ZN12CAchievement15_sendSetTriggerEjh>  ; CAchievement::_sendSetTrigger(unsigned int, unsigned char)
0828b6cb +0x053:  jmp    0828b7fa <+0x182>
0828b6d0 +0x058:  mov    -0xc(%ebp),%eax
0828b6d3 +0x05b:  mov    0x8(%eax),%eax
0828b6d6 +0x05e:  cmp    $0x7,%eax
0828b6d9 +0x061:  jne    0828b6f3 <+0x7b>
0828b6db +0x063:  mov    0x8(%ebp),%eax
0828b6de +0x066:  mov    0x8(%eax),%eax
0828b6e1 +0x069:  mov    %eax,(%esp)
0828b6e4 +0x06c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0828b6e9 +0x071:  mov    -0xc(%ebp),%edx
0828b6ec +0x074:  mov    0x20(%edx),%edx
0828b6ef +0x077:  cmp    %edx,%eax
0828b6f1 +0x079:  jge    0828b6fa <+0x82>
0828b6f3 +0x07b:  mov    $0x1,%eax
0828b6f8 +0x080:  jmp    0828b6ff <+0x87>
0828b6fa +0x082:  mov    $0x0,%eax
0828b6ff +0x087:  test   %al,%al
0828b701 +0x089:  je     0828b722 <+0xaa>
0828b703 +0x08b:  movl   $0x1,0x8(%esp)
0828b70b +0x093:  mov    0xc(%ebp),%eax
0828b70e +0x096:  mov    %eax,0x4(%esp)
0828b712 +0x09a:  mov    0x8(%ebp),%eax
0828b715 +0x09d:  mov    %eax,(%esp)
0828b718 +0x0a0:  call   0828c252 <_ZN12CAchievement15_sendSetTriggerEjh>  ; CAchievement::_sendSetTrigger(unsigned int, unsigned char)
0828b71d +0x0a5:  jmp    0828b7fa <+0x182>
0828b722 +0x0aa:  mov    0xc(%ebp),%eax
0828b725 +0x0ad:  mov    %eax,0x4(%esp)
0828b729 +0x0b1:  mov    0x8(%ebp),%eax
0828b72c +0x0b4:  mov    %eax,(%esp)
0828b72f +0x0b7:  call   0828cbe4 <_ZN12CAchievement20isClearedAchievementEj>  ; CAchievement::isClearedAchievement(unsigned int)
0828b734 +0x0bc:  test   %al,%al
0828b736 +0x0be:  je     0828b757 <+0xdf>
0828b738 +0x0c0:  movl   $0x2,0x8(%esp)
0828b740 +0x0c8:  mov    0xc(%ebp),%eax
0828b743 +0x0cb:  mov    %eax,0x4(%esp)
0828b747 +0x0cf:  mov    0x8(%ebp),%eax
0828b74a +0x0d2:  mov    %eax,(%esp)
0828b74d +0x0d5:  call   0828c252 <_ZN12CAchievement15_sendSetTriggerEjh>  ; CAchievement::_sendSetTrigger(unsigned int, unsigned char)
0828b752 +0x0da:  jmp    0828b7fa <+0x182>
0828b757 +0x0df:  movzwl -0x24(%ebp),%ecx
0828b75b +0x0e3:  movzwl -0x20(%ebp),%edx
0828b75f +0x0e7:  movzwl -0x1c(%ebp),%eax
0828b763 +0x0eb:  mov    %ecx,0x10(%esp)
0828b767 +0x0ef:  mov    %edx,0xc(%esp)
0828b76b +0x0f3:  mov    %eax,0x8(%esp)
0828b76f +0x0f7:  mov    0xc(%ebp),%eax
0828b772 +0x0fa:  mov    %eax,0x4(%esp)
0828b776 +0x0fe:  mov    0x8(%ebp),%eax
0828b779 +0x101:  mov    %eax,(%esp)
0828b77c +0x104:  call   0828b800 <_ZN12CAchievement14_verifyTriggerEjttt>  ; CAchievement::_verifyTrigger(unsigned int, unsigned short, unsigned short, unsigned short)
0828b781 +0x109:  xor    $0x1,%eax
0828b784 +0x10c:  test   %al,%al
0828b786 +0x10e:  je     0828b7a4 <+0x12c>
0828b788 +0x110:  movl   $0x2,0x8(%esp)
0828b790 +0x118:  mov    0xc(%ebp),%eax
0828b793 +0x11b:  mov    %eax,0x4(%esp)
0828b797 +0x11f:  mov    0x8(%ebp),%eax
0828b79a +0x122:  mov    %eax,(%esp)
0828b79d +0x125:  call   0828c252 <_ZN12CAchievement15_sendSetTriggerEjh>  ; CAchievement::_sendSetTrigger(unsigned int, unsigned char)
0828b7a2 +0x12a:  jmp    0828b7fa <+0x182>
0828b7a4 +0x12c:  movzwl -0x24(%ebp),%ecx
0828b7a8 +0x130:  movzwl -0x20(%ebp),%edx
0828b7ac +0x134:  movzwl -0x1c(%ebp),%eax
0828b7b0 +0x138:  mov    %ecx,0x10(%esp)
0828b7b4 +0x13c:  mov    %edx,0xc(%esp)
0828b7b8 +0x140:  mov    %eax,0x8(%esp)
0828b7bc +0x144:  mov    0xc(%ebp),%eax
0828b7bf +0x147:  mov    %eax,0x4(%esp)
0828b7c3 +0x14b:  mov    0x8(%ebp),%eax
0828b7c6 +0x14e:  mov    %eax,(%esp)
0828b7c9 +0x151:  call   0828b896 <_ZN12CAchievement11_setTriggerEjttt>  ; CAchievement::_setTrigger(unsigned int, unsigned short, unsigned short, unsigned short)
0828b7ce +0x156:  movl   $0x0,0x8(%esp)
0828b7d6 +0x15e:  mov    0xc(%ebp),%eax
0828b7d9 +0x161:  mov    %eax,0x4(%esp)
0828b7dd +0x165:  mov    0x8(%ebp),%eax
0828b7e0 +0x168:  mov    %eax,(%esp)
0828b7e3 +0x16b:  call   0828c252 <_ZN12CAchievement15_sendSetTriggerEjh>  ; CAchievement::_sendSetTrigger(unsigned int, unsigned char)
0828b7e8 +0x170:  mov    0xc(%ebp),%eax
0828b7eb +0x173:  mov    %eax,0x4(%esp)
0828b7ef +0x177:  mov    0x8(%ebp),%eax
0828b7f2 +0x17a:  mov    %eax,(%esp)
0828b7f5 +0x17d:  call   0828bbae <_ZN12CAchievement14_checkCompleteEj>  ; CAchievement::_checkComplete(unsigned int)
0828b7fa +0x182:  add    $0x44,%esp
0828b7fd +0x185:  pop    %ebx
0828b7fe +0x186:  pop    %ebp
0828b7ff +0x187:  ret
```

## 反编译 C

```c
// CAchievement::setTrigger @ 0x828b678

/* CAchievement::setTrigger(unsigned int, unsigned short, unsigned short, unsigned short) */

void __thiscall
CAchievement::setTrigger
          (CAchievement *this,uint param_1,ushort param_2,ushort param_3,ushort param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = G_CDataManager();
  iVar3 = CDataManager::find_quest(iVar3);
  if (iVar3 != 0) {
    if ((*(int *)(iVar3 + 8) == 7) &&
       (iVar4 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)(this + 8)),
       *(int *)(iVar3 + 0x20) <= iVar4)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      _sendSetTrigger(this,param_1,'\x01');
    }
    else {
      cVar2 = isClearedAchievement((uint)this);
      if (cVar2 == '\0') {
        cVar2 = _verifyTrigger((uint)this,(ushort)param_1,param_2,param_3);
        if (cVar2 == '\x01') {
          _setTrigger(this,param_1,param_2,param_3,param_4);
          _sendSetTrigger(this,param_1,'\0');
          _checkComplete(this,param_1);
        }
        else {
          _sendSetTrigger(this,param_1,'\x02');
        }
      }
      else {
        _sendSetTrigger(this,param_1,'\x02');
      }
    }
    return;
  }
  _sendSetTrigger(this,param_1,'\x01');
  return;
}
```
