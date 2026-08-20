# _removeInitSkill

`_ZN20CPremiumLetheManager16_removeInitSkillEP5CUserP15_Mastered_skill`

`CPremiumLetheManager::_removeInitSkill(CUser*, _Mastered_skill*)`

| 类 | 地址 |
|---|---|
| `CPremiumLetheManager` | `0x085c4a12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c4a12  _ZN20CPremiumLetheManager16_removeInitSkillEP5CUserP15_Mastered_skill
#           CPremiumLetheManager::_removeInitSkill(CUser*, _Mastered_skill*)
# range [0x085c4a12, 0x085c4b2f]
085c4a12 +0x000:  push   %ebp
085c4a13 +0x001:  mov    %esp,%ebp
085c4a15 +0x003:  push   %ebx
085c4a16 +0x004:  sub    $0x24,%esp
085c4a19 +0x007:  mov    0xc(%ebp),%eax
085c4a1c +0x00a:  mov    %eax,(%esp)
085c4a1f +0x00d:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
085c4a24 +0x012:  cmp    $0xffffffff,%eax
085c4a27 +0x015:  je     085c4a38 <+0x26>
085c4a29 +0x017:  mov    0xc(%ebp),%eax
085c4a2c +0x01a:  mov    %eax,(%esp)
085c4a2f +0x01d:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
085c4a34 +0x022:  test   %eax,%eax
085c4a36 +0x024:  jne    085c4a3f <+0x2d>
085c4a38 +0x026:  mov    $0x1,%eax
085c4a3d +0x02b:  jmp    085c4a44 <+0x32>
085c4a3f +0x02d:  mov    $0x0,%eax
085c4a44 +0x032:  test   %al,%al
085c4a46 +0x034:  je     085c4a5b <+0x49>
085c4a48 +0x036:  mov    0xc(%ebp),%eax
085c4a4b +0x039:  mov    %eax,(%esp)
085c4a4e +0x03c:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
085c4a53 +0x041:  add    $0x46,%eax
085c4a56 +0x044:  mov    %eax,-0x14(%ebp)
085c4a59 +0x047:  jmp    085c4a6e <+0x5c>
085c4a5b +0x049:  mov    0xc(%ebp),%eax
085c4a5e +0x04c:  mov    %eax,(%esp)
085c4a61 +0x04f:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
085c4a66 +0x054:  add    $0x1de,%eax
085c4a6b +0x059:  mov    %eax,-0x14(%ebp)
085c4a6e +0x05c:  movl   $0x0,-0x10(%ebp)
085c4a75 +0x063:  jmp    085c4b18 <+0x106>
085c4a7a +0x068:  movl   $0x0,-0xc(%ebp)
085c4a81 +0x06f:  jmp    085c4b02 <+0xf0>
085c4a83 +0x071:  mov    -0x10(%ebp),%eax
085c4a86 +0x074:  add    %eax,%eax
085c4a88 +0x076:  add    -0x14(%ebp),%eax
085c4a8b +0x079:  movzbl (%eax),%eax
085c4a8e +0x07c:  test   %al,%al
085c4a90 +0x07e:  je     085c4afe <+0xec>
085c4a92 +0x080:  mov    -0x10(%ebp),%eax
085c4a95 +0x083:  add    %eax,%eax
085c4a97 +0x085:  add    -0x14(%ebp),%eax
085c4a9a +0x088:  movzbl (%eax),%edx
085c4a9d +0x08b:  mov    -0xc(%ebp),%eax
085c4aa0 +0x08e:  add    %eax,%eax
085c4aa2 +0x090:  add    0x10(%ebp),%eax
085c4aa5 +0x093:  movzbl (%eax),%eax
085c4aa8 +0x096:  cmp    %al,%dl
085c4aaa +0x098:  jne    085c4afe <+0xec>
085c4aac +0x09a:  mov    -0xc(%ebp),%eax
085c4aaf +0x09d:  add    %eax,%eax
085c4ab1 +0x09f:  add    0x10(%ebp),%eax
085c4ab4 +0x0a2:  mov    -0xc(%ebp),%edx
085c4ab7 +0x0a5:  add    %edx,%edx
085c4ab9 +0x0a7:  add    0x10(%ebp),%edx
085c4abc +0x0aa:  movzbl 0x1(%edx),%edx
085c4ac0 +0x0ae:  mov    %edx,%ecx
085c4ac2 +0x0b0:  mov    -0x10(%ebp),%edx
085c4ac5 +0x0b3:  add    %edx,%edx
085c4ac7 +0x0b5:  add    -0x14(%ebp),%edx
085c4aca +0x0b8:  movzbl 0x1(%edx),%edx
085c4ace +0x0bc:  mov    %ecx,%ebx
085c4ad0 +0x0be:  sub    %dl,%bl
085c4ad2 +0x0c0:  mov    %ebx,%edx
085c4ad4 +0x0c2:  mov    %dl,0x1(%eax)
085c4ad7 +0x0c5:  mov    -0xc(%ebp),%eax
085c4ada +0x0c8:  add    %eax,%eax
085c4adc +0x0ca:  add    0x10(%ebp),%eax
085c4adf +0x0cd:  movzbl 0x1(%eax),%eax
085c4ae3 +0x0d1:  test   %al,%al
085c4ae5 +0x0d3:  jg     085c4afe <+0xec>
085c4ae7 +0x0d5:  mov    -0xc(%ebp),%eax
085c4aea +0x0d8:  add    %eax,%eax
085c4aec +0x0da:  add    0x10(%ebp),%eax
085c4aef +0x0dd:  movb   $0x0,(%eax)
085c4af2 +0x0e0:  mov    -0xc(%ebp),%eax
085c4af5 +0x0e3:  add    %eax,%eax
085c4af7 +0x0e5:  add    0x10(%ebp),%eax
085c4afa +0x0e8:  movb   $0x0,0x1(%eax)
085c4afe +0x0ec:  addl   $0x1,-0xc(%ebp)
085c4b02 +0x0f0:  cmpl   $0xcb,-0xc(%ebp)
085c4b09 +0x0f7:  setle  %al
085c4b0c +0x0fa:  test   %al,%al
085c4b0e +0x0fc:  jne    085c4a83 <+0x71>
085c4b14 +0x102:  addl   $0x1,-0x10(%ebp)
085c4b18 +0x106:  cmpl   $0xcb,-0x10(%ebp)
085c4b1f +0x10d:  setle  %al
085c4b22 +0x110:  test   %al,%al
085c4b24 +0x112:  jne    085c4a7a <+0x68>
085c4b2a +0x118:  add    $0x24,%esp
085c4b2d +0x11b:  pop    %ebx
085c4b2e +0x11c:  pop    %ebp
085c4b2f +0x11d:  ret
```

## 反编译 C

```c
// CPremiumLetheManager::_removeInitSkill @ 0x85c4a12

/* CPremiumLetheManager::_removeInitSkill(CUser*, _Mastered_skill*) */

void __thiscall
CPremiumLetheManager::_removeInitSkill
          (CPremiumLetheManager *this,CUser *param_1,_Mastered_skill *param_2)

{
  bool bVar1;
  int iVar2;
  int local_18;
  int local_14;
  int local_10;
  
  iVar2 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
  if (iVar2 != -1) {
    iVar2 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_085c4a44;
    }
  }
  bVar1 = true;
LAB_085c4a44:
  if (bVar1) {
    local_18 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
    local_18 = local_18 + 0x46;
  }
  else {
    local_18 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
    local_18 = local_18 + 0x1de;
  }
  for (local_14 = 0; local_14 < 0xcc; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
      if (((*(char *)(local_14 * 2 + local_18) != '\0') &&
          (*(_Mastered_skill *)(local_14 * 2 + local_18) == param_2[local_10 * 2])) &&
         (param_2[local_10 * 2 + 1] =
               (_Mastered_skill)
               ((char)param_2[local_10 * 2 + 1] - *(char *)(local_14 * 2 + local_18 + 1)),
         (char)param_2[local_10 * 2 + 1] < '\x01')) {
        param_2[local_10 * 2] = (_Mastered_skill)0x0;
        param_2[local_10 * 2 + 1] = (_Mastered_skill)0x0;
      }
    }
  }
  return;
}
```
