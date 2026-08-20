# _itemTypeVerify

`_ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem`

`WongWork::CSecialIMonsterDropItemGenRateTable::_itemTypeVerify(int, CItem const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CSecialIMonsterDropItemGenRateTable` | `0x085352a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085352a6  _ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem
#           WongWork::CSecialIMonsterDropItemGenRateTable::_itemTypeVerify(int, CItem const*)
# range [0x085352a6, 0x08535343]
085352a6 +0x00:  push   %ebp
085352a7 +0x01:  mov    %esp,%ebp
085352a9 +0x03:  sub    $0x18,%esp
085352ac +0x06:  mov    0x10(%ebp),%eax
085352af +0x09:  mov    %eax,(%esp)
085352b2 +0x0c:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
085352b7 +0x11:  test   %al,%al
085352b9 +0x13:  je     085352fc <+0x56>
085352bb +0x15:  mov    0x10(%ebp),%eax
085352be +0x18:  mov    (%eax),%eax
085352c0 +0x1a:  add    $0xc,%eax
085352c3 +0x1d:  mov    (%eax),%edx
085352c5 +0x1f:  mov    0x10(%ebp),%eax
085352c8 +0x22:  mov    %eax,(%esp)
085352cb +0x25:  call   *%edx
085352cd +0x27:  cmp    $0x3,%eax
085352d0 +0x2a:  jne    085352df <+0x39>
085352d2 +0x2c:  cmpl   $0x3,0xc(%ebp)
085352d6 +0x30:  jne    085352df <+0x39>
085352d8 +0x32:  mov    $0x1,%eax
085352dd +0x37:  jmp    085352e4 <+0x3e>
085352df +0x39:  mov    $0x0,%eax
085352e4 +0x3e:  test   %al,%al
085352e6 +0x40:  je     085352ef <+0x49>
085352e8 +0x42:  mov    $0x1,%eax
085352ed +0x47:  jmp    08535341 <+0x9b>
085352ef +0x49:  cmpl   $0x1,0xc(%ebp)
085352f3 +0x4d:  jne    0853533c <+0x96>
085352f5 +0x4f:  mov    $0x1,%eax
085352fa +0x54:  jmp    08535341 <+0x9b>
085352fc +0x56:  mov    0x10(%ebp),%eax
085352ff +0x59:  mov    (%eax),%eax
08535301 +0x5b:  add    $0x14,%eax
08535304 +0x5e:  mov    (%eax),%edx
08535306 +0x60:  mov    0x10(%ebp),%eax
08535309 +0x63:  mov    %eax,(%esp)
0853530c +0x66:  call   *%edx
0853530e +0x68:  test   %al,%al
08535310 +0x6a:  je     0853531f <+0x79>
08535312 +0x6c:  cmpl   $0x4,0xc(%ebp)
08535316 +0x70:  jne    0853531f <+0x79>
08535318 +0x72:  mov    $0x1,%eax
0853531d +0x77:  jmp    08535324 <+0x7e>
0853531f +0x79:  mov    $0x0,%eax
08535324 +0x7e:  test   %al,%al
08535326 +0x80:  je     0853532f <+0x89>
08535328 +0x82:  mov    $0x1,%eax
0853532d +0x87:  jmp    08535341 <+0x9b>
0853532f +0x89:  cmpl   $0x2,0xc(%ebp)
08535333 +0x8d:  jne    0853533c <+0x96>
08535335 +0x8f:  mov    $0x1,%eax
0853533a +0x94:  jmp    08535341 <+0x9b>
0853533c +0x96:  mov    $0x0,%eax
08535341 +0x9b:  leave
08535342 +0x9c:  ret
08535343 +0x9d:  nop
```

## 反编译 C

```c
// WongWork::CSecialIMonsterDropItemGenRateTable::_itemTypeVerify @ 0x85352a6

/* WongWork::CSecialIMonsterDropItemGenRateTable::_itemTypeVerify(int, CItem const*) */

undefined4 __thiscall
WongWork::CSecialIMonsterDropItemGenRateTable::_itemTypeVerify
          (CSecialIMonsterDropItemGenRateTable *this,int param_1,CItem *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = CItem::is_stackable(param_2);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(int *)param_2 + 0x14))(param_2);
    if ((cVar2 == '\0') || (param_1 != 4)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 1;
    }
    if (param_1 == 2) {
      return 1;
    }
  }
  else {
    iVar3 = (**(code **)(*(int *)param_2 + 0xc))(param_2);
    if ((iVar3 == 3) && (param_1 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
    if (param_1 == 1) {
      return 1;
    }
  }
  return 0;
}
```
