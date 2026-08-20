# GetIndexLuckyStrengtheningDeed

`_ZN17Event_Upgrade_Jar30GetIndexLuckyStrengtheningDeedEv`

`Event_Upgrade_Jar::GetIndexLuckyStrengtheningDeed()`

| 类 | 地址 |
|---|---|
| `Event_Upgrade_Jar` | `0x080f4fd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f4fd0  _ZN17Event_Upgrade_Jar30GetIndexLuckyStrengtheningDeedEv
#           Event_Upgrade_Jar::GetIndexLuckyStrengtheningDeed()
# range [0x080f4fd0, 0x080f500e]
080f4fd0 +0x00:  push   %ebp
080f4fd1 +0x01:  mov    %esp,%ebp
080f4fd3 +0x03:  sub    $0x18,%esp
080f4fd6 +0x06:  mov    0x8(%ebp),%eax
080f4fd9 +0x09:  add    $0x34,%eax
080f4fdc +0x0c:  mov    %eax,(%esp)
080f4fdf +0x0f:  call   080f5604 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5b5>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5b5
080f4fe4 +0x14:  cmp    $0x1,%eax
080f4fe7 +0x17:  seta   %al
080f4fea +0x1a:  test   %al,%al
080f4fec +0x1c:  je     080f5008 <+0x38>
080f4fee +0x1e:  mov    0x8(%ebp),%eax
080f4ff1 +0x21:  add    $0x34,%eax
080f4ff4 +0x24:  movl   $0x1,0x4(%esp)
080f4ffc +0x2c:  mov    %eax,(%esp)
080f4fff +0x2f:  call   080f5684 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x635>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x635
080f5004 +0x34:  mov    (%eax),%eax
080f5006 +0x36:  jmp    080f500d <+0x3d>
080f5008 +0x38:  mov    $0x0,%eax
080f500d +0x3d:  leave
080f500e +0x3e:  ret
```

## 反编译 C

```c
// Event_Upgrade_Jar::GetIndexLuckyStrengtheningDeed @ 0x80f4fd0

/* Event_Upgrade_Jar::GetIndexLuckyStrengtheningDeed() */

undefined4 __thiscall Event_Upgrade_Jar::GetIndexLuckyStrengtheningDeed(Event_Upgrade_Jar *this)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = std::vector<unsigned_long,std::allocator<unsigned_long>>::size
                    ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x34));
  if (uVar1 < 2) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined4 *)
             std::vector<unsigned_long,std::allocator<unsigned_long>>::operator[]
                       ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x34),1);
    uVar3 = *puVar2;
  }
  return uVar3;
}
```
