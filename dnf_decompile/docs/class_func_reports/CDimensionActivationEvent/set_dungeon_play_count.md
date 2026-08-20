# set_dungeon_play_count

`_ZN25CDimensionActivationEvent22set_dungeon_play_countEv`

`CDimensionActivationEvent::set_dungeon_play_count()`

| 类 | 地址 |
|---|---|
| `CDimensionActivationEvent` | `0x080eebc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080eebc0  _ZN25CDimensionActivationEvent22set_dungeon_play_countEv
#           CDimensionActivationEvent::set_dungeon_play_count()
# range [0x080eebc0, 0x080eec57]
080eebc0 +0x00:  push   %ebp
080eebc1 +0x01:  mov    %esp,%ebp
080eebc3 +0x03:  push   %ebx
080eebc4 +0x04:  sub    $0x34,%esp
080eebc7 +0x07:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080eebcc +0x0c:  mov    0x4b18(%eax),%eax
080eebd2 +0x12:  mov    %eax,-0x10(%ebp)
080eebd5 +0x15:  movl   $0x0,0xc(%esp)
080eebdd +0x1d:  movl   $0x27,0x8(%esp)
080eebe5 +0x25:  movl   $&_ZZN25CDimensionActivationEvent22set_dungeon_play_countEvE19__PRETTY_FUNCTION__,0x4(%esp)
080eebed +0x2d:  lea    -0x20(%ebp),%eax
080eebf0 +0x30:  mov    %eax,(%esp)
080eebf3 +0x33:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080eebf8 +0x38:  mov    -0x10(%ebp),%eax
080eebfb +0x3b:  mov    %eax,0x8(%esp)
080eebff +0x3f:  movl   $"CDimensionActivationEvent day_play_count : %d",0x4(%esp)
080eec07 +0x47:  lea    -0x20(%ebp),%eax
080eec0a +0x4a:  mov    %eax,(%esp)
080eec0d +0x4d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080eec12 +0x52:  cmpl   $0x0,-0x10(%ebp)
080eec16 +0x56:  jle    080eec50 <+0x90>
080eec18 +0x58:  movl   $0x0,-0xc(%ebp)
080eec1f +0x5f:  jmp    080eec43 <+0x83>
080eec21 +0x61:  mov    -0x10(%ebp),%eax
080eec24 +0x64:  movsbl %al,%ebx
080eec27 +0x67:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080eec2c +0x6c:  mov    %ebx,0x8(%esp)
080eec30 +0x70:  mov    -0xc(%ebp),%edx
080eec33 +0x73:  mov    %edx,0x4(%esp)
080eec37 +0x77:  mov    %eax,(%esp)
080eec3a +0x7a:  call   080eed82 <_GLOBAL__I__ZN25CDimensionActivationEventC2Ev+0x1d>  ; global constructors keyed to CDimensionActivationEvent::CDimensionActivationEvent()+0x1d
080eec3f +0x7f:  addl   $0x1,-0xc(%ebp)
080eec43 +0x83:  cmpl   $0x5,-0xc(%ebp)
080eec47 +0x87:  setle  %al
080eec4a +0x8a:  test   %al,%al
080eec4c +0x8c:  jne    080eec21 <+0x61>
080eec4e +0x8e:  jmp    080eec51 <+0x91>
080eec50 +0x90:  nop
080eec51 +0x91:  add    $0x34,%esp
080eec54 +0x94:  pop    %ebx
080eec55 +0x95:  pop    %ebp
080eec56 +0x96:  ret
080eec57 +0x97:  nop
```

## 反编译 C

```c
// CDimensionActivationEvent::set_dungeon_play_count @ 0x80eebc0

/* CDimensionActivationEvent::set_dungeon_play_count() */

void CDimensionActivationEvent::set_dungeon_play_count(void)

{
  char cVar1;
  int iVar2;
  CDataManager *this;
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  iVar2 = G_CDataManager();
  local_14 = *(int *)(iVar2 + 0x4b18);
  cMyTrace::cMyTrace(local_24,"void CDimensionActivationEvent::set_dungeon_play_count()",0x27,0);
  cMyTrace::operator()(local_24,"CDimensionActivationEvent day_play_count : %d",local_14);
  if (0 < local_14) {
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      cVar1 = (char)local_14;
      this = (CDataManager *)G_CDataManager();
      CDataManager::set_dimensionInout(this,local_10,cVar1);
    }
  }
  return;
}
```
