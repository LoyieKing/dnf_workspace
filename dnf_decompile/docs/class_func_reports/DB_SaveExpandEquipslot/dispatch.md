# dispatch

`_ZN22DB_SaveExpandEquipslot8dispatchEiiP6Stream`

`DB_SaveExpandEquipslot::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveExpandEquipslot` | `0x0840da96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840da96  _ZN22DB_SaveExpandEquipslot8dispatchEiiP6Stream
#           DB_SaveExpandEquipslot::dispatch(int, int, Stream*)
# range [0x0840da96, 0x0840daff]
0840da96 +0x00:  push   %ebp
0840da97 +0x01:  mov    %esp,%ebp
0840da99 +0x03:  sub    $0x28,%esp
0840da9c +0x06:  mov    0x14(%ebp),%eax
0840da9f +0x09:  mov    %eax,(%esp)
0840daa2 +0x0c:  call   0845087a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3490>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3490
0840daa7 +0x11:  mov    %eax,-0xc(%ebp)
0840daaa +0x14:  mov    -0xc(%ebp),%eax
0840daad +0x17:  mov    %eax,0x4(%esp)
0840dab1 +0x1b:  mov    0x8(%ebp),%eax
0840dab4 +0x1e:  mov    %eax,(%esp)
0840dab7 +0x21:  call   0843ff48 <_ZN22DB_SaveExpandEquipslot20_SaveExpandEquipslotEP25SIG_SAVE_EXPAND_EQUIPSLOT>  ; DB_SaveExpandEquipslot::_SaveExpandEquipslot(SIG_SAVE_EXPAND_EQUIPSLOT*)
0840dabc +0x26:  xor    $0x1,%eax
0840dabf +0x29:  test   %al,%al
0840dac1 +0x2b:  je     0840daca <+0x34>
0840dac3 +0x2d:  mov    $0x0,%eax
0840dac8 +0x32:  jmp    0840dafe <+0x68>
0840daca +0x34:  mov    -0xc(%ebp),%eax
0840dacd +0x37:  lea    0x898(%eax),%edx
0840dad3 +0x3d:  mov    -0xc(%ebp),%eax
0840dad6 +0x40:  mov    (%eax),%eax
0840dad8 +0x42:  mov    %edx,0x8(%esp)
0840dadc +0x46:  mov    %eax,0x4(%esp)
0840dae0 +0x4a:  mov    0x8(%ebp),%eax
0840dae3 +0x4d:  mov    %eax,(%esp)
0840dae6 +0x50:  call   0843febe <_ZN22DB_SaveExpandEquipslot15_SaveCharacStatEjP27SIG_SAVE_EXPAND_CHARAC_STAT>  ; DB_SaveExpandEquipslot::_SaveCharacStat(unsigned int, SIG_SAVE_EXPAND_CHARAC_STAT*)
0840daeb +0x55:  xor    $0x1,%eax
0840daee +0x58:  test   %al,%al
0840daf0 +0x5a:  je     0840daf9 <+0x63>
0840daf2 +0x5c:  mov    $0x0,%eax
0840daf7 +0x61:  jmp    0840dafe <+0x68>
0840daf9 +0x63:  mov    $0x1,%eax
0840dafe +0x68:  leave
0840daff +0x69:  ret
```

## 反编译 C

```c
// DB_SaveExpandEquipslot::dispatch @ 0x840da96

/* DB_SaveExpandEquipslot::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SaveExpandEquipslot::dispatch
          (DB_SaveExpandEquipslot *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_SAVE_EXPAND_CHARAC *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_EXPAND_CHARAC>(param_3);
  cVar1 = _SaveExpandEquipslot(this,(SIG_SAVE_EXPAND_EQUIPSLOT *)pSVar2);
  if (cVar1 == '\x01') {
    cVar1 = _SaveCharacStat(this,*(uint *)pSVar2,(SIG_SAVE_EXPAND_CHARAC_STAT *)(pSVar2 + 0x898));
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
