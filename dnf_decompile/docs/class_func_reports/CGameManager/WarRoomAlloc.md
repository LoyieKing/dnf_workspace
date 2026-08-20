# WarRoomAlloc

`_ZN12CGameManager12WarRoomAllocEv`

`CGameManager::WarRoomAlloc()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08298a30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08298a30  _ZN12CGameManager12WarRoomAllocEv
#           CGameManager::WarRoomAlloc()
# range [0x08298a30, 0x08298b3f]
08298a30 +0x000:  push   %ebp
08298a31 +0x001:  mov    %esp,%ebp
08298a33 +0x003:  push   %ebx
08298a34 +0x004:  sub    $0x34,%esp
08298a37 +0x007:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08298a3c +0x00c:  add    $0x87b4,%eax
08298a41 +0x011:  mov    %eax,(%esp)
08298a44 +0x014:  call   089024c4 <_ZN14WarAreaCounter18GetCurrenTimeTableEv>  ; WarAreaCounter::GetCurrenTimeTable()
08298a49 +0x019:  mov    %eax,-0x1c(%ebp)
08298a4c +0x01c:  movl   $0x0,-0x18(%ebp)
08298a53 +0x023:  jmp    08298b20 <+0xf0>
08298a58 +0x028:  movl   $0x0,-0x14(%ebp)
08298a5f +0x02f:  movl   $0x0,-0x10(%ebp)
08298a66 +0x036:  jmp    08298af4 <+0xc4>
08298a6b +0x03b:  mov    0x8(%ebp),%eax
08298a6e +0x03e:  mov    %eax,(%esp)
08298a71 +0x041:  call   082a24e8 <_ZN12CGameManager10GetWarRoomEv>  ; CGameManager::GetWarRoom()
08298a76 +0x046:  mov    %eax,-0xc(%ebp)
08298a79 +0x049:  mov    -0x18(%ebp),%eax
08298a7c +0x04c:  mov    %eax,%edx
08298a7e +0x04e:  mov    -0xc(%ebp),%eax
08298a81 +0x051:  mov    %dl,(%eax)
08298a83 +0x053:  mov    -0x14(%ebp),%eax
08298a86 +0x056:  mov    %eax,%edx
08298a88 +0x058:  mov    -0xc(%ebp),%eax
08298a8b +0x05b:  mov    %dl,0x1(%eax)
08298a8e +0x05e:  addl   $0x1,-0x14(%ebp)
08298a92 +0x062:  mov    -0xc(%ebp),%eax
08298a95 +0x065:  mov    %eax,(%esp)
08298a98 +0x068:  call   086bd5d4 <_ZN7WarRoom7PrepareEv>  ; WarRoom::Prepare()
08298a9d +0x06d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08298aa2 +0x072:  mov    %eax,%ecx
08298aa4 +0x074:  mov    -0x1c(%ebp),%edx
08298aa7 +0x077:  mov    -0x18(%ebp),%ebx
08298aaa +0x07a:  mov    %edx,%eax
08298aac +0x07c:  shl    $0x2,%eax
08298aaf +0x07f:  add    %edx,%eax
08298ab1 +0x081:  add    %eax,%eax
08298ab3 +0x083:  add    %ebx,%eax
08298ab5 +0x085:  add    $0x223c,%eax
08298aba +0x08a:  mov    0x8(%ecx,%eax,4),%eax
08298abe +0x08e:  cmp    -0x10(%ebp),%eax
08298ac1 +0x091:  setg   %al
08298ac4 +0x094:  test   %al,%al
08298ac6 +0x096:  je     08298add <+0xad>
08298ac8 +0x098:  movl   $0x0,0x4(%esp)
08298ad0 +0x0a0:  mov    -0xc(%ebp),%eax
08298ad3 +0x0a3:  mov    %eax,(%esp)
08298ad6 +0x0a6:  call   082a5a56 <_GLOBAL__I__ZN4CLog5this_E+0x1e7d>  ; global constructors keyed to CLog::this_+0x1e7d
08298adb +0x0ab:  jmp    08298af0 <+0xc0>
08298add +0x0ad:  movl   $0xffffffff,0x4(%esp)
08298ae5 +0x0b5:  mov    -0xc(%ebp),%eax
08298ae8 +0x0b8:  mov    %eax,(%esp)
08298aeb +0x0bb:  call   082a5a56 <_GLOBAL__I__ZN4CLog5this_E+0x1e7d>  ; global constructors keyed to CLog::this_+0x1e7d
08298af0 +0x0c0:  addl   $0x1,-0x10(%ebp)
08298af4 +0x0c4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08298af9 +0x0c9:  lea    0x87b4(%eax),%edx
08298aff +0x0cf:  mov    -0x18(%ebp),%eax
08298b02 +0x0d2:  mov    %eax,0x4(%esp)
08298b06 +0x0d6:  mov    %edx,(%esp)
08298b09 +0x0d9:  call   082a3d80 <_GLOBAL__I__ZN4CLog5this_E+0x1a7>  ; global constructors keyed to CLog::this_+0x1a7
08298b0e +0x0de:  cmp    -0x10(%ebp),%eax
08298b11 +0x0e1:  setg   %al
08298b14 +0x0e4:  test   %al,%al
08298b16 +0x0e6:  jne    08298a6b <+0x3b>
08298b1c +0x0ec:  addl   $0x1,-0x18(%ebp)
08298b20 +0x0f0:  cmpl   $0x9,-0x18(%ebp)
08298b24 +0x0f4:  setle  %al
08298b27 +0x0f7:  test   %al,%al
08298b29 +0x0f9:  jne    08298a58 <+0x28>
08298b2f +0x0ff:  mov    0x8(%ebp),%eax
08298b32 +0x102:  mov    %eax,(%esp)
08298b35 +0x105:  call   08298b40 <_ZN12CGameManager16PrintWarRoomListEv>  ; CGameManager::PrintWarRoomList()
08298b3a +0x10a:  add    $0x34,%esp
08298b3d +0x10d:  pop    %ebx
08298b3e +0x10e:  pop    %ebp
08298b3f +0x10f:  ret
```

## 反编译 C

```c
// CGameManager::WarRoomAlloc @ 0x8298a30

/* CGameManager::WarRoomAlloc() */

void __thiscall CGameManager::WarRoomAlloc(CGameManager *this)

{
  WarRoom WVar1;
  int iVar2;
  WarRoom *this_00;
  int iVar3;
  int local_1c;
  int local_14;
  
  iVar2 = G_CDataManager();
  iVar2 = WarAreaCounter::GetCurrenTimeTable((WarAreaCounter *)(iVar2 + 0x87b4));
  for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
    WVar1 = (WarRoom)0x0;
    local_14 = 0;
    while( true ) {
      iVar3 = G_CDataManager();
      iVar3 = WarAreaCounter::GetWarRoomCountAtPeekTime((WarAreaCounter *)(iVar3 + 0x87b4),local_1c)
      ;
      if (iVar3 <= local_14) break;
      this_00 = (WarRoom *)GetWarRoom(this);
      *this_00 = SUB41(local_1c,0);
      this_00[1] = WVar1;
      WVar1 = (WarRoom)((char)WVar1 + '\x01');
      WarRoom::Prepare(this_00);
      iVar3 = G_CDataManager();
      if (local_14 < *(int *)(iVar3 + 8 + (iVar2 * 10 + local_1c + 0x223c) * 4)) {
        WarRoom::SetState(this_00,0);
      }
      else {
        WarRoom::SetState(this_00,0xffffffff);
      }
      local_14 = local_14 + 1;
    }
  }
  PrintWarRoomList();
  return;
}
```
