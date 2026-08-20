# CheckMaxLuckyLevel

`_ZN17Event_Upgrade_Jar18CheckMaxLuckyLevelER10Inven_Itemm`

`Event_Upgrade_Jar::CheckMaxLuckyLevel(Inven_Item&, unsigned long)`

| 类 | 地址 |
|---|---|
| `Event_Upgrade_Jar` | `0x080f4f62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f4f62  _ZN17Event_Upgrade_Jar18CheckMaxLuckyLevelER10Inven_Itemm
#           Event_Upgrade_Jar::CheckMaxLuckyLevel(Inven_Item&, unsigned long)
# range [0x080f4f62, 0x080f4fcf]
080f4f62 +0x00:  push   %ebp
080f4f63 +0x01:  mov    %esp,%ebp
080f4f65 +0x03:  sub    $0x18,%esp
080f4f68 +0x06:  mov    0x8(%ebp),%eax
080f4f6b +0x09:  add    $0x34,%eax
080f4f6e +0x0c:  mov    %eax,(%esp)
080f4f71 +0x0f:  call   080f5604 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5b5>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5b5
080f4f76 +0x14:  cmp    $0x1,%eax
080f4f79 +0x17:  seta   %al
080f4f7c +0x1a:  test   %al,%al
080f4f7e +0x1c:  je     080f4fc9 <+0x67>
080f4f80 +0x1e:  mov    0x8(%ebp),%eax
080f4f83 +0x21:  add    $0x34,%eax
080f4f86 +0x24:  movl   $0x1,0x4(%esp)
080f4f8e +0x2c:  mov    %eax,(%esp)
080f4f91 +0x2f:  call   080f5684 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x635>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x635
080f4f96 +0x34:  mov    (%eax),%eax
080f4f98 +0x36:  cmp    0x10(%ebp),%eax
080f4f9b +0x39:  sete   %al
080f4f9e +0x3c:  test   %al,%al
080f4fa0 +0x3e:  je     080f4fc9 <+0x67>
080f4fa2 +0x40:  mov    0xc(%ebp),%eax
080f4fa5 +0x43:  mov    %eax,(%esp)
080f4fa8 +0x46:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
080f4fad +0x4b:  movzbl %al,%edx
080f4fb0 +0x4e:  mov    0x8(%ebp),%eax
080f4fb3 +0x51:  mov    0x80(%eax),%eax
080f4fb9 +0x57:  cmp    %eax,%edx
080f4fbb +0x59:  setae  %al
080f4fbe +0x5c:  test   %al,%al
080f4fc0 +0x5e:  je     080f4fc9 <+0x67>
080f4fc2 +0x60:  mov    $0x0,%eax
080f4fc7 +0x65:  jmp    080f4fce <+0x6c>
080f4fc9 +0x67:  mov    $0x1,%eax
080f4fce +0x6c:  leave
080f4fcf +0x6d:  ret
```

## 反编译 C

```c
// Event_Upgrade_Jar::CheckMaxLuckyLevel @ 0x80f4f62

/* Event_Upgrade_Jar::CheckMaxLuckyLevel(Inven_Item&, unsigned long) */

undefined4 __thiscall
Event_Upgrade_Jar::CheckMaxLuckyLevel(Event_Upgrade_Jar *this,Inven_Item *param_1,ulong param_2)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = std::vector<unsigned_long,std::allocator<unsigned_long>>::size
                    ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x34));
  if (((1 < uVar1) &&
      (puVar2 = (ulong *)std::vector<unsigned_long,std::allocator<unsigned_long>>::operator[]
                                   ((vector<unsigned_long,std::allocator<unsigned_long>> *)
                                    (this + 0x34),1), *puVar2 == param_2)) &&
     (uVar1 = Inven_Item::GetUpgrade(param_1), *(uint *)(this + 0x80) <= (uVar1 & 0xff))) {
    return 0;
  }
  return 1;
}
```
