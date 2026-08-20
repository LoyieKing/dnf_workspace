# CheckState

`_ZN7WarRoom10CheckStateEv`

`WarRoom::CheckState()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bd3ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bd3ec  _ZN7WarRoom10CheckStateEv
#           WarRoom::CheckState()
# range [0x086bd3ec, 0x086bd45f]
086bd3ec +0x00:  push   %ebp
086bd3ed +0x01:  mov    %esp,%ebp
086bd3ef +0x03:  sub    $0x18,%esp
086bd3f2 +0x06:  mov    0x8(%ebp),%eax
086bd3f5 +0x09:  mov    %eax,(%esp)
086bd3f8 +0x0c:  call   086babcc <_ZNK7WarRoom14GetWaiterCountEv>  ; WarRoom::GetWaiterCount() const
086bd3fd +0x11:  test   %eax,%eax
086bd3ff +0x13:  sete   %al
086bd402 +0x16:  test   %al,%al
086bd404 +0x18:  je     086bd41b <+0x2f>
086bd406 +0x1a:  movl   $0x0,0x4(%esp)
086bd40e +0x22:  mov    0x8(%ebp),%eax
086bd411 +0x25:  mov    %eax,(%esp)
086bd414 +0x28:  call   086bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>  ; WarRoom::ChangeState(WARROOM_STATE)
086bd419 +0x2d:  jmp    086bd45e <+0x72>
086bd41b +0x2f:  mov    0x8(%ebp),%eax
086bd41e +0x32:  mov    %eax,(%esp)
086bd421 +0x35:  call   086babcc <_ZNK7WarRoom14GetWaiterCountEv>  ; WarRoom::GetWaiterCount() const
086bd426 +0x3a:  cmp    $0x2,%eax
086bd429 +0x3d:  jg     086bd442 <+0x56>
086bd42b +0x3f:  mov    0x8(%ebp),%eax
086bd42e +0x42:  mov    %eax,(%esp)
086bd431 +0x45:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
086bd436 +0x4a:  cmp    $0x1,%eax
086bd439 +0x4d:  jne    086bd442 <+0x56>
086bd43b +0x4f:  mov    $0x1,%eax
086bd440 +0x54:  jmp    086bd447 <+0x5b>
086bd442 +0x56:  mov    $0x0,%eax
086bd447 +0x5b:  test   %al,%al
086bd449 +0x5d:  je     086bd45e <+0x72>
086bd44b +0x5f:  movl   $0x0,0x4(%esp)
086bd453 +0x67:  mov    0x8(%ebp),%eax
086bd456 +0x6a:  mov    %eax,(%esp)
086bd459 +0x6d:  call   086bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>  ; WarRoom::ChangeState(WARROOM_STATE)
086bd45e +0x72:  leave
086bd45f +0x73:  ret
```

## 反编译 C

```c
// WarRoom::CheckState @ 0x86bd3ec

/* WarRoom::CheckState() */

void __thiscall WarRoom::CheckState(WarRoom *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = GetWaiterCount(this);
  if (iVar2 != 0) {
    iVar2 = GetWaiterCount(this);
    if ((iVar2 < 3) && (iVar2 = GetState(this), iVar2 == 1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      ChangeState(this,0);
    }
    return;
  }
  ChangeState(this,0);
  return;
}
```
