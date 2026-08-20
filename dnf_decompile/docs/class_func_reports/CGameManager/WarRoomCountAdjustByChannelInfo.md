# WarRoomCountAdjustByChannelInfo

`_ZN12CGameManager31WarRoomCountAdjustByChannelInfoEv`

`CGameManager::WarRoomCountAdjustByChannelInfo()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08298940` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08298940  _ZN12CGameManager31WarRoomCountAdjustByChannelInfoEv
#           CGameManager::WarRoomCountAdjustByChannelInfo()
# range [0x08298940, 0x08298a2f]
08298940 +0x00:  push   %ebp
08298941 +0x01:  mov    %esp,%ebp
08298943 +0x03:  push   %edi
08298944 +0x04:  push   %esi
08298945 +0x05:  push   %ebx
08298946 +0x06:  sub    $0x3c,%esp
08298949 +0x09:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0829894e +0x0e:  mov    %eax,(%esp)
08298951 +0x11:  call   0814a6f8 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x497>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x497
08298956 +0x16:  mov    %eax,-0x28(%ebp)
08298959 +0x19:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829895e +0x1e:  mov    %eax,(%esp)
08298961 +0x21:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08298966 +0x26:  mov    %eax,%ebx
08298968 +0x28:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829896d +0x2d:  mov    0x378(%eax),%eax
08298973 +0x33:  movzbl %al,%eax
08298976 +0x36:  mov    %ebx,0x8(%esp)
0829897a +0x3a:  mov    %eax,0x4(%esp)
0829897e +0x3e:  mov    -0x28(%ebp),%eax
08298981 +0x41:  mov    %eax,(%esp)
08298984 +0x44:  call   088dcd38 <_ZNK16channel_script_t14getChannelInfoEhj>  ; channel_script_t::getChannelInfo(unsigned char, unsigned int) const
08298989 +0x49:  mov    %eax,-0x24(%ebp)
0829898c +0x4c:  movl   $0x0,-0x20(%ebp)
08298993 +0x53:  jmp    08298a19 <+0xd9>
08298998 +0x58:  movl   $0x0,-0x1c(%ebp)
0829899f +0x5f:  jmp    08298a0a <+0xca>
082989a1 +0x61:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082989a6 +0x66:  mov    %eax,%esi
082989a8 +0x68:  mov    -0x1c(%ebp),%ebx
082989ab +0x6b:  mov    -0x20(%ebp),%edi
082989ae +0x6e:  mov    -0x20(%ebp),%edx
082989b1 +0x71:  mov    -0x24(%ebp),%eax
082989b4 +0x74:  add    $0x4,%edx
082989b7 +0x77:  flds   0x8(%eax,%edx,4)
082989bb +0x7b:  fstps  -0x34(%ebp)
082989be +0x7e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082989c3 +0x83:  mov    -0x1c(%ebp),%edx
082989c6 +0x86:  add    $0x21ec,%edx
082989cc +0x8c:  mov    0x4(%eax,%edx,4),%eax
082989d0 +0x90:  mov    %eax,-0x2c(%ebp)
082989d3 +0x93:  fildl  -0x2c(%ebp)
082989d6 +0x96:  fmuls  -0x34(%ebp)
082989d9 +0x99:  fnstcw -0x2e(%ebp)
082989dc +0x9c:  movzwl -0x2e(%ebp),%eax
082989e0 +0xa0:  mov    $0xc,%ah
082989e2 +0xa2:  mov    %ax,-0x30(%ebp)
082989e6 +0xa6:  fldcw  -0x30(%ebp)
082989e9 +0xa9:  fistpl -0x2c(%ebp)
082989ec +0xac:  fldcw  -0x2e(%ebp)
082989ef +0xaf:  mov    -0x2c(%ebp),%edx
082989f2 +0xb2:  mov    %ebx,%eax
082989f4 +0xb4:  shl    $0x2,%eax
082989f7 +0xb7:  add    %ebx,%eax
082989f9 +0xb9:  add    %eax,%eax
082989fb +0xbb:  add    %edi,%eax
082989fd +0xbd:  add    $0x223c,%eax
08298a02 +0xc2:  mov    %edx,0x8(%esi,%eax,4)
08298a06 +0xc6:  addl   $0x1,-0x1c(%ebp)
08298a0a +0xca:  cmpl   $0x17,-0x1c(%ebp)
08298a0e +0xce:  setle  %al
08298a11 +0xd1:  test   %al,%al
08298a13 +0xd3:  jne    082989a1 <+0x61>
08298a15 +0xd5:  addl   $0x1,-0x20(%ebp)
08298a19 +0xd9:  cmpl   $0x9,-0x20(%ebp)
08298a1d +0xdd:  setle  %al
08298a20 +0xe0:  test   %al,%al
08298a22 +0xe2:  jne    08298998 <+0x58>
08298a28 +0xe8:  add    $0x3c,%esp
08298a2b +0xeb:  pop    %ebx
08298a2c +0xec:  pop    %esi
08298a2d +0xed:  pop    %edi
08298a2e +0xee:  pop    %ebp
08298a2f +0xef:  ret
```

## 反编译 C

```c
// CGameManager::WarRoomCountAdjustByChannelInfo @ 0x8298940

/* CGameManager::WarRoomCountAdjustByChannelInfo() */

void CGameManager::WarRoomCountAdjustByChannelInfo(void)

{
  float fVar1;
  CDataManager *this;
  channel_script_t *this_00;
  CEnvironment *this_01;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_24;
  undefined4 local_20;
  
  this = (CDataManager *)G_CDataManager();
  this_00 = (channel_script_t *)CDataManager::GetChannelScript(this);
  this_01 = (CEnvironment *)G_CEnvironment();
  uVar2 = CEnvironment::get_channel_no(this_01);
  iVar3 = G_CEnvironment();
  iVar3 = channel_script_t::getChannelInfo(this_00,(uchar)*(undefined4 *)(iVar3 + 0x378),uVar2);
  for (local_24 = 0; local_24 < 10; local_24 = local_24 + 1) {
    for (local_20 = 0; local_20 < 0x18; local_20 = local_20 + 1) {
      iVar4 = G_CDataManager();
      fVar1 = *(float *)(iVar3 + 8 + (local_24 + 4) * 4);
      iVar5 = G_CDataManager();
      *(int *)(iVar4 + 8 + (local_20 * 10 + local_24 + 0x223c) * 4) =
           (int)ROUND((float)*(int *)(iVar5 + 4 + (local_20 + 0x21ec) * 4) * fVar1);
    }
  }
  return;
}
```
