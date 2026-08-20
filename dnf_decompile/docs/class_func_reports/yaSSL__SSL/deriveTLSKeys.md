# deriveTLSKeys

`_ZN5yaSSL3SSL13deriveTLSKeysEv`

`yaSSL::SSL::deriveTLSKeys()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874fbc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874fbc0  _ZN5yaSSL3SSL13deriveTLSKeysEv
#           yaSSL::SSL::deriveTLSKeys()
# range [0x0874fbc0, 0x0874fd19]
0874fbc0 +0x000:  push   %ebp
0874fbc1 +0x001:  mov    %esp,%ebp
0874fbc3 +0x003:  push   %edi
0874fbc4 +0x004:  push   %esi
0874fbc5 +0x005:  push   %ebx
0874fbc6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0874fbcb +0x00b:  add    $0xc1cfcd,%ebx
0874fbd1 +0x011:  sub    $0x8c,%esp
0874fbd7 +0x017:  mov    0x8(%ebp),%esi
0874fbda +0x01a:  add    $0x68,%esi
0874fbdd +0x01d:  mov    %esi,(%esp)
0874fbe0 +0x020:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874fbe5 +0x025:  movzbl 0x14(%eax),%edi
0874fbe9 +0x029:  mov    %esi,(%esp)
0874fbec +0x02c:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874fbf1 +0x031:  movzbl 0xc(%eax),%edx
0874fbf5 +0x035:  mov    %esi,(%esp)
0874fbf8 +0x038:  lea    (%edx,%edi,1),%edi
0874fbfb +0x03b:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874fc00 +0x040:  movzbl 0xd(%eax),%edx
0874fc04 +0x044:  lea    (%edi,%edx,1),%edx
0874fc07 +0x047:  add    %edx,%edx
0874fc09 +0x049:  lea    -0x28(%ebp),%edi
0874fc0c +0x04c:  mov    %edx,0x4(%esp)
0874fc10 +0x050:  mov    %edx,-0x70(%ebp)
0874fc13 +0x053:  mov    %edi,(%esp)
0874fc16 +0x056:  call   087972e0 <_ZN5yaSSL12input_bufferC1Ej>  ; yaSSL::input_buffer::input_buffer(unsigned int)
0874fc1b +0x05b:  mov    %esi,(%esp)
0874fc1e +0x05e:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874fc23 +0x063:  lea    -0x68(%ebp),%ecx
0874fc26 +0x066:  mov    %ecx,-0x6c(%ebp)
0874fc29 +0x069:  lea    0x54(%eax),%ecx
0874fc2c +0x06c:  mov    0x54(%eax),%eax
0874fc2f +0x06f:  mov    %eax,-0x68(%ebp)
0874fc32 +0x072:  mov    0x4(%ecx),%eax
0874fc35 +0x075:  mov    %eax,-0x64(%ebp)
0874fc38 +0x078:  mov    0x8(%ecx),%eax
0874fc3b +0x07b:  mov    %eax,-0x60(%ebp)
0874fc3e +0x07e:  mov    0xc(%ecx),%eax
0874fc41 +0x081:  mov    %eax,-0x5c(%ebp)
0874fc44 +0x084:  mov    0x10(%ecx),%eax
0874fc47 +0x087:  mov    %eax,-0x58(%ebp)
0874fc4a +0x08a:  mov    0x14(%ecx),%eax
0874fc4d +0x08d:  mov    %eax,-0x54(%ebp)
0874fc50 +0x090:  mov    0x18(%ecx),%eax
0874fc53 +0x093:  mov    %eax,-0x50(%ebp)
0874fc56 +0x096:  mov    0x1c(%ecx),%eax
0874fc59 +0x099:  mov    %esi,(%esp)
0874fc5c +0x09c:  mov    %eax,-0x4c(%ebp)
0874fc5f +0x09f:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874fc64 +0x0a4:  lea    0x34(%eax),%ecx
0874fc67 +0x0a7:  mov    0x34(%eax),%eax
0874fc6a +0x0aa:  mov    %eax,-0x48(%ebp)
0874fc6d +0x0ad:  mov    0x4(%ecx),%eax
0874fc70 +0x0b0:  mov    %eax,-0x44(%ebp)
0874fc73 +0x0b3:  mov    0x8(%ecx),%eax
0874fc76 +0x0b6:  mov    %eax,-0x40(%ebp)
0874fc79 +0x0b9:  mov    0xc(%ecx),%eax
0874fc7c +0x0bc:  mov    %eax,-0x3c(%ebp)
0874fc7f +0x0bf:  mov    0x10(%ecx),%eax
0874fc82 +0x0c2:  mov    %eax,-0x38(%ebp)
0874fc85 +0x0c5:  mov    0x14(%ecx),%eax
0874fc88 +0x0c8:  mov    %eax,-0x34(%ebp)
0874fc8b +0x0cb:  mov    0x18(%ecx),%eax
0874fc8e +0x0ce:  mov    %eax,-0x30(%ebp)
0874fc91 +0x0d1:  mov    0x1c(%ecx),%eax
0874fc94 +0x0d4:  mov    %esi,(%esp)
0874fc97 +0x0d7:  mov    %eax,-0x2c(%ebp)
0874fc9a +0x0da:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874fc9f +0x0df:  mov    %edi,(%esp)
0874fca2 +0x0e2:  mov    %eax,%esi
0874fca4 +0x0e4:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0874fca9 +0x0e9:  mov    -0x6c(%ebp),%ecx
0874fcac +0x0ec:  add    $0x4,%esi
0874fcaf +0x0ef:  mov    -0x70(%ebp),%edx
0874fcb2 +0x0f2:  mov    %esi,0x8(%esp)
0874fcb6 +0x0f6:  movl   $0x40,0x1c(%esp)
0874fcbe +0x0fe:  mov    %ecx,0x18(%esp)
0874fcc2 +0x102:  lea    -0x6679e8(%ebx),%ecx
0874fcc8 +0x108:  mov    %ecx,0x10(%esp)
0874fccc +0x10c:  mov    %edx,0x4(%esp)
0874fcd0 +0x110:  mov    %eax,(%esp)
0874fcd3 +0x113:  movl   $0xd,0x14(%esp)
0874fcdb +0x11b:  movl   $0x30,0xc(%esp)
0874fce3 +0x123:  call   0879e980 <_ZN5yaSSL3PRFEPhjPKhjS2_jS2_j>  ; yaSSL::PRF(unsigned char*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int)
0874fce8 +0x128:  mov    %edi,(%esp)
0874fceb +0x12b:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0874fcf0 +0x130:  mov    %eax,0x4(%esp)
0874fcf4 +0x134:  mov    0x8(%ebp),%eax
0874fcf7 +0x137:  mov    %eax,(%esp)
0874fcfa +0x13a:  call   0874f0b0 <_ZN5yaSSL3SSL9storeKeysEPKh>  ; yaSSL::SSL::storeKeys(unsigned char const*)
0874fcff +0x13f:  mov    %edi,(%esp)
0874fd02 +0x142:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
0874fd07 +0x147:  add    $0x8c,%esp
0874fd0d +0x14d:  pop    %ebx
0874fd0e +0x14e:  pop    %esi
0874fd0f +0x14f:  pop    %edi
0874fd10 +0x150:  pop    %ebp
0874fd11 +0x151:  ret
0874fd12 +0x152:  lea    0x0(%esi,%eiz,1),%esi
0874fd19 +0x159:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL::deriveTLSKeys @ 0x874fbc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::deriveTLSKeys() */

void __thiscall yaSSL::SSL::deriveTLSKeys(SSL *this)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uchar *puVar5;
  Security *this_00;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  input_buffer local_2c [24];
  undefined4 uStack_14;
  
  uStack_14 = 0x874fbcb;
  this_00 = (Security *)(this + 0x68);
  iVar4 = Security::get_parms(this_00);
  bVar1 = *(byte *)(iVar4 + 0x14);
  iVar4 = Security::get_parms(this_00);
  bVar2 = *(byte *)(iVar4 + 0xc);
  iVar4 = Security::get_parms(this_00);
  uVar3 = ((uint)bVar2 + (uint)bVar1 + (uint)*(byte *)(iVar4 + 0xd)) * 2;
  input_buffer::input_buffer(local_2c,uVar3);
  iVar4 = Security::get_connection(this_00);
  local_6c = *(undefined4 *)(iVar4 + 0x54);
  local_68 = *(undefined4 *)(iVar4 + 0x58);
  local_64 = *(undefined4 *)(iVar4 + 0x5c);
  local_60 = *(undefined4 *)(iVar4 + 0x60);
  local_5c = *(undefined4 *)(iVar4 + 100);
  local_58 = *(undefined4 *)(iVar4 + 0x68);
  local_54 = *(undefined4 *)(iVar4 + 0x6c);
  local_50 = *(undefined4 *)(iVar4 + 0x70);
  iVar4 = Security::get_connection(this_00);
  local_4c = *(undefined4 *)(iVar4 + 0x34);
  local_48 = *(undefined4 *)(iVar4 + 0x38);
  local_44 = *(undefined4 *)(iVar4 + 0x3c);
  local_40 = *(undefined4 *)(iVar4 + 0x40);
  local_3c = *(undefined4 *)(iVar4 + 0x44);
  local_38 = *(undefined4 *)(iVar4 + 0x48);
  local_34 = *(undefined4 *)(iVar4 + 0x4c);
  local_30 = *(undefined4 *)(iVar4 + 0x50);
  iVar4 = Security::get_connection(this_00);
  puVar5 = (uchar *)input_buffer::get_buffer(local_2c);
  PRF(puVar5,uVar3,(uchar *)(iVar4 + 4),0x30,(uchar *)"key expansion",0xd,(uchar *)&local_6c,0x40);
  puVar5 = (uchar *)input_buffer::get_buffer(local_2c);
  storeKeys(this,puVar5);
  input_buffer::~input_buffer(local_2c);
  return;
}
```
