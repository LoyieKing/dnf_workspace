# moveNextStage

`_ZN8WongWork10CBossStage13moveNextStageEv`

`WongWork::CBossStage::moveNextStage()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814d1b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814d1b6  _ZN8WongWork10CBossStage13moveNextStageEv
#           WongWork::CBossStage::moveNextStage()
# range [0x0814d1b6, 0x0814d213]
0814d1b6 +0x00:  push   %ebp
0814d1b7 +0x01:  mov    %esp,%ebp
0814d1b9 +0x03:  sub    $0x18,%esp
0814d1bc +0x06:  mov    0x8(%ebp),%eax
0814d1bf +0x09:  add    $0xa00,%eax
0814d1c4 +0x0e:  mov    %eax,(%esp)
0814d1c7 +0x11:  call   081459ba <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x43d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x43d
0814d1cc +0x16:  xor    $0x1,%eax
0814d1cf +0x19:  test   %al,%al
0814d1d1 +0x1b:  je     0814d1da <+0x24>
0814d1d3 +0x1d:  mov    $0x0,%eax
0814d1d8 +0x22:  jmp    0814d211 <+0x5b>
0814d1da +0x24:  mov    0x8(%ebp),%eax
0814d1dd +0x27:  mov    0xae0(%eax),%edx
0814d1e3 +0x2d:  mov    0x8(%ebp),%eax
0814d1e6 +0x30:  mov    0xae4(%eax),%eax
0814d1ec +0x36:  cmp    %eax,%edx
0814d1ee +0x38:  jb     0814d1f7 <+0x41>
0814d1f0 +0x3a:  mov    $0x0,%eax
0814d1f5 +0x3f:  jmp    0814d211 <+0x5b>
0814d1f7 +0x41:  mov    0x8(%ebp),%eax
0814d1fa +0x44:  mov    0xae0(%eax),%eax
0814d200 +0x4a:  lea    0x1(%eax),%edx
0814d203 +0x4d:  mov    0x8(%ebp),%eax
0814d206 +0x50:  mov    %edx,0xae0(%eax)
0814d20c +0x56:  mov    $0x1,%eax
0814d211 +0x5b:  leave
0814d212 +0x5c:  ret
0814d213 +0x5d:  nop
```

## 反编译 C

```c
// WongWork::CBossStage::moveNextStage @ 0x814d1b6

/* WongWork::CBossStage::moveNextStage() */

undefined4 __thiscall WongWork::CBossStage::moveNextStage(CBossStage *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
          ::empty((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                   *)(this + 0xa00));
  if (cVar1 == '\x01') {
    if (*(uint *)(this + 0xae0) < *(uint *)(this + 0xae4)) {
      *(int *)(this + 0xae0) = *(int *)(this + 0xae0) + 1;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
