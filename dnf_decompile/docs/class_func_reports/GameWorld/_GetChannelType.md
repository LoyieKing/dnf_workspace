# _GetChannelType

`_ZN9GameWorld15_GetChannelTypeEv`

`GameWorld::_GetChannelType()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cd272` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cd272  _ZN9GameWorld15_GetChannelTypeEv
#           GameWorld::_GetChannelType()
# range [0x086cd272, 0x086cd2f5]
086cd272 +0x00:  push   %ebp
086cd273 +0x01:  mov    %esp,%ebp
086cd275 +0x03:  push   %ebx
086cd276 +0x04:  sub    $0x24,%esp
086cd279 +0x07:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cd27e +0x0c:  mov    0x30c(%eax),%eax
086cd284 +0x12:  cmp    $0x12,%eax
086cd287 +0x15:  setle  %al
086cd28a +0x18:  test   %al,%al
086cd28c +0x1a:  je     086cd29b <+0x29>
086cd28e +0x1c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cd293 +0x21:  mov    0x30c(%eax),%eax
086cd299 +0x27:  jmp    086cd2ef <+0x7d>
086cd29b +0x29:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086cd2a0 +0x2e:  mov    %eax,(%esp)
086cd2a3 +0x31:  call   0814a6f8 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x497>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x497
086cd2a8 +0x36:  mov    %eax,-0x10(%ebp)
086cd2ab +0x39:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cd2b0 +0x3e:  mov    0x1b0(%eax),%eax
086cd2b6 +0x44:  mov    %eax,%ebx
086cd2b8 +0x46:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cd2bd +0x4b:  mov    0x378(%eax),%eax
086cd2c3 +0x51:  movzbl %al,%eax
086cd2c6 +0x54:  mov    %ebx,0x8(%esp)
086cd2ca +0x58:  mov    %eax,0x4(%esp)
086cd2ce +0x5c:  mov    -0x10(%ebp),%eax
086cd2d1 +0x5f:  mov    %eax,(%esp)
086cd2d4 +0x62:  call   088dcd38 <_ZNK16channel_script_t14getChannelInfoEhj>  ; channel_script_t::getChannelInfo(unsigned char, unsigned int) const
086cd2d9 +0x67:  mov    %eax,-0xc(%ebp)
086cd2dc +0x6a:  cmpl   $0x0,-0xc(%ebp)
086cd2e0 +0x6e:  jne    086cd2e9 <+0x77>
086cd2e2 +0x70:  mov    $0x13,%eax
086cd2e7 +0x75:  jmp    086cd2ef <+0x7d>
086cd2e9 +0x77:  mov    -0xc(%ebp),%eax
086cd2ec +0x7a:  mov    0x4(%eax),%eax
086cd2ef +0x7d:  add    $0x24,%esp
086cd2f2 +0x80:  pop    %ebx
086cd2f3 +0x81:  pop    %ebp
086cd2f4 +0x82:  ret
086cd2f5 +0x83:  nop
```

## 反编译 C

```c
// GameWorld::_GetChannelType @ 0x86cd272

/* GameWorld::_GetChannelType() */

undefined4 GameWorld::_GetChannelType(void)

{
  uint uVar1;
  int iVar2;
  CDataManager *this;
  channel_script_t *this_00;
  undefined4 uVar3;
  
  iVar2 = G_CEnvironment();
  if (*(int *)(iVar2 + 0x30c) < 0x13) {
    iVar2 = G_CEnvironment();
    uVar3 = *(undefined4 *)(iVar2 + 0x30c);
  }
  else {
    this = (CDataManager *)G_CDataManager();
    this_00 = (channel_script_t *)CDataManager::GetChannelScript(this);
    iVar2 = G_CEnvironment();
    uVar1 = *(uint *)(iVar2 + 0x1b0);
    iVar2 = G_CEnvironment();
    iVar2 = channel_script_t::getChannelInfo(this_00,(uchar)*(undefined4 *)(iVar2 + 0x378),uVar1);
    if (iVar2 == 0) {
      uVar3 = 0x13;
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 4);
    }
  }
  return uVar3;
}
```
