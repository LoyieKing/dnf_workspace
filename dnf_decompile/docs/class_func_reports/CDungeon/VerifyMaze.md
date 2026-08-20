# VerifyMaze

`_ZNK8CDungeon10VerifyMazeEv`

`CDungeon::VerifyMaze() const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x0834c9f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834c9f0  _ZNK8CDungeon10VerifyMazeEv
#           CDungeon::VerifyMaze() const
# range [0x0834c9f0, 0x0834cb7b]
0834c9f0 +0x000:  push   %ebp
0834c9f1 +0x001:  mov    %esp,%ebp
0834c9f3 +0x003:  push   %esi
0834c9f4 +0x004:  push   %ebx
0834c9f5 +0x005:  sub    $0xa0,%esp
0834c9fb +0x00b:  mov    0x8(%ebp),%eax
0834c9fe +0x00e:  mov    0x8(%eax),%eax
0834ca01 +0x011:  cmp    $0x7cf,%eax
0834ca06 +0x016:  jle    0834ca12 <+0x22>
0834ca08 +0x018:  mov    $0x1,%ebx
0834ca0d +0x01d:  jmp    0834cb6f <+0x17f>
0834ca12 +0x022:  movl   $0x0,-0x18(%ebp)
0834ca19 +0x029:  jmp    0834ca5d <+0x6d>
0834ca1b +0x02b:  mov    0x8(%ebp),%eax
0834ca1e +0x02e:  lea    0x62c(%eax),%edx
0834ca24 +0x034:  mov    -0x18(%ebp),%eax
0834ca27 +0x037:  mov    %eax,0x4(%esp)
0834ca2b +0x03b:  mov    %edx,(%esp)
0834ca2e +0x03e:  call   0838a1b4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c54>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c54
0834ca33 +0x043:  mov    %eax,-0x14(%ebp)
0834ca36 +0x046:  mov    -0x14(%ebp),%eax
0834ca39 +0x049:  mov    %eax,0x4(%esp)
0834ca3d +0x04d:  mov    0x8(%ebp),%eax
0834ca40 +0x050:  mov    %eax,(%esp)
0834ca43 +0x053:  call   0834cb7c <_ZNK8CDungeon10VerifyMazeERK10MazeScript>  ; CDungeon::VerifyMaze(MazeScript const&) const
0834ca48 +0x058:  xor    $0x1,%eax
0834ca4b +0x05b:  test   %al,%al
0834ca4d +0x05d:  je     0834ca59 <+0x69>
0834ca4f +0x05f:  mov    $0x0,%ebx
0834ca54 +0x064:  jmp    0834cb6f <+0x17f>
0834ca59 +0x069:  addl   $0x1,-0x18(%ebp)
0834ca5d +0x06d:  mov    0x8(%ebp),%eax
0834ca60 +0x070:  add    $0x62c,%eax
0834ca65 +0x075:  mov    %eax,(%esp)
0834ca68 +0x078:  call   0838a192 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c32>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c32
0834ca6d +0x07d:  cmp    -0x18(%ebp),%eax
0834ca70 +0x080:  seta   %al
0834ca73 +0x083:  test   %al,%al
0834ca75 +0x085:  jne    0834ca1b <+0x2b>
0834ca77 +0x087:  movl   $0x0,-0x10(%ebp)
0834ca7e +0x08e:  jmp    0834cb5b <+0x16b>
0834ca83 +0x093:  movl   $0x0,-0xc(%ebp)
0834ca8a +0x09a:  jmp    0834cb2a <+0x13a>
0834ca8f +0x09f:  mov    -0x10(%ebp),%edx
0834ca92 +0x0a2:  mov    %edx,%eax
0834ca94 +0x0a4:  add    %eax,%eax
0834ca96 +0x0a6:  add    %edx,%eax
0834ca98 +0x0a8:  shl    $0x2,%eax
0834ca9b +0x0ab:  add    $0x630,%eax
0834caa0 +0x0b0:  add    0x8(%ebp),%eax
0834caa3 +0x0b3:  lea    0x8(%eax),%edx
0834caa6 +0x0b6:  mov    -0xc(%ebp),%eax
0834caa9 +0x0b9:  mov    %eax,0x4(%esp)
0834caad +0x0bd:  mov    %edx,(%esp)
0834cab0 +0x0c0:  call   0838a1b4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c54>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c54
0834cab5 +0x0c5:  mov    %eax,0x4(%esp)
0834cab9 +0x0c9:  lea    -0x8c(%ebp),%eax
0834cabf +0x0cf:  mov    %eax,(%esp)
0834cac2 +0x0d2:  call   08376d8a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x682a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x682a
0834cac7 +0x0d7:  lea    -0x8c(%ebp),%eax
0834cacd +0x0dd:  mov    %eax,0x4(%esp)
0834cad1 +0x0e1:  mov    0x8(%ebp),%eax
0834cad4 +0x0e4:  mov    %eax,(%esp)
0834cad7 +0x0e7:  call   0834cb7c <_ZNK8CDungeon10VerifyMazeERK10MazeScript>  ; CDungeon::VerifyMaze(MazeScript const&) const
0834cadc +0x0ec:  xor    $0x1,%eax
0834cadf +0x0ef:  test   %al,%al
0834cae1 +0x0f1:  je     0834caef <+0xff>
0834cae3 +0x0f3:  mov    $0x0,%ebx
0834cae8 +0x0f8:  mov    $0x0,%esi
0834caed +0x0fd:  jmp    0834cb14 <+0x124>
0834caef +0x0ff:  mov    $0x1,%esi
0834caf4 +0x104:  jmp    0834cb14 <+0x124>
0834caf6 +0x106:  mov    %edx,%ebx
0834caf8 +0x108:  mov    %eax,%esi
0834cafa +0x10a:  lea    -0x8c(%ebp),%eax
0834cb00 +0x110:  mov    %eax,(%esp)
0834cb03 +0x113:  call   08376f00 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x69a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x69a0
0834cb08 +0x118:  mov    %esi,%eax
0834cb0a +0x11a:  mov    %ebx,%edx
0834cb0c +0x11c:  mov    %eax,(%esp)
0834cb0f +0x11f:  call   08ae3750 <_Unwind_Resume>
0834cb14 +0x124:  lea    -0x8c(%ebp),%eax
0834cb1a +0x12a:  mov    %eax,(%esp)
0834cb1d +0x12d:  call   08376f00 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x69a0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x69a0
0834cb22 +0x132:  test   %esi,%esi
0834cb24 +0x134:  je     0834cb6f <+0x17f>
0834cb26 +0x136:  addl   $0x1,-0xc(%ebp)
0834cb2a +0x13a:  mov    -0x10(%ebp),%edx
0834cb2d +0x13d:  mov    %edx,%eax
0834cb2f +0x13f:  add    %eax,%eax
0834cb31 +0x141:  add    %edx,%eax
0834cb33 +0x143:  shl    $0x2,%eax
0834cb36 +0x146:  add    $0x630,%eax
0834cb3b +0x14b:  add    0x8(%ebp),%eax
0834cb3e +0x14e:  add    $0x8,%eax
0834cb41 +0x151:  mov    %eax,(%esp)
0834cb44 +0x154:  call   0838a192 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c32>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c32
0834cb49 +0x159:  cmp    -0xc(%ebp),%eax
0834cb4c +0x15c:  seta   %al
0834cb4f +0x15f:  test   %al,%al
0834cb51 +0x161:  jne    0834ca8f <+0x9f>
0834cb57 +0x167:  addl   $0x1,-0x10(%ebp)
0834cb5b +0x16b:  cmpl   $0x1,-0x10(%ebp)
0834cb5f +0x16f:  setle  %al
0834cb62 +0x172:  test   %al,%al
0834cb64 +0x174:  jne    0834ca83 <+0x93>
0834cb6a +0x17a:  mov    $0x1,%ebx
0834cb6f +0x17f:  mov    %ebx,%eax
0834cb71 +0x181:  add    $0xa0,%esp
0834cb77 +0x187:  pop    %ebx
0834cb78 +0x188:  pop    %esi
0834cb79 +0x189:  pop    %ebp
0834cb7a +0x18a:  ret
0834cb7b +0x18b:  nop
```

## 反编译 C

```c
// CDungeon::VerifyMaze @ 0x834c9f0

/* CDungeon::VerifyMaze() const */

undefined4 __thiscall CDungeon::VerifyMaze(CDungeon *this)

{
  char cVar1;
  uint uVar2;
  MazeScript *pMVar3;
  undefined4 unaff_EBX;
  MazeScript local_90 [116];
  uint local_1c;
  MazeScript *local_18;
  int local_14;
  uint local_10;
  
  if (*(int *)(this + 8) < 2000) {
    local_1c = 0;
    while (uVar2 = std::vector<MazeScript,std::allocator<MazeScript>>::size
                             ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c)),
          local_1c < uVar2) {
      local_18 = (MazeScript *)
                 std::vector<MazeScript,std::allocator<MazeScript>>::operator[]
                           ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c),local_1c
                           );
      cVar1 = VerifyMaze(this,local_18);
      if (cVar1 != '\x01') {
        return 0;
      }
      local_1c = local_1c + 1;
    }
    for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
      local_10 = 0;
      while (uVar2 = std::vector<MazeScript,std::allocator<MazeScript>>::size
                               ((vector<MazeScript,std::allocator<MazeScript>> *)
                                (this + local_14 * 0xc + 0x638)), local_10 < uVar2) {
        pMVar3 = (MazeScript *)
                 std::vector<MazeScript,std::allocator<MazeScript>>::operator[]
                           ((vector<MazeScript,std::allocator<MazeScript>> *)
                            (this + local_14 * 0xc + 0x638),local_10);
        MazeScript::MazeScript(local_90,pMVar3);
                    /* try { // try from 0834cad7 to 0834cadb has its CatchHandler @ 0834caf6 */
        cVar1 = VerifyMaze(this,local_90);
        if (cVar1 != '\x01') {
          unaff_EBX = 0;
        }
        MazeScript::~MazeScript(local_90);
        if (cVar1 != '\x01') {
          return unaff_EBX;
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return 1;
}
```
