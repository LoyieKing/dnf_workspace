# storeKeys

`_ZN5yaSSL3SSL9storeKeysEPKh`

`yaSSL::SSL::storeKeys(unsigned char const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874f0b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f0b0  _ZN5yaSSL3SSL9storeKeysEPKh
#           yaSSL::SSL::storeKeys(unsigned char const*)
# range [0x0874f0b0, 0x0874f20a]
0874f0b0 +0x000:  push   %ebp
0874f0b1 +0x001:  mov    %esp,%ebp
0874f0b3 +0x003:  push   %edi
0874f0b4 +0x004:  push   %esi
0874f0b5 +0x005:  push   %ebx
0874f0b6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0874f0bb +0x00b:  add    $0xc1dadd,%ebx
0874f0c1 +0x011:  sub    $0x2c,%esp
0874f0c4 +0x014:  mov    0x8(%ebp),%ecx
0874f0c7 +0x017:  mov    0xc(%ebp),%edi
0874f0ca +0x01a:  lea    0x68(%ecx),%esi
0874f0cd +0x01d:  mov    %ecx,-0x24(%ebp)
0874f0d0 +0x020:  mov    %esi,(%esp)
0874f0d3 +0x023:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874f0d8 +0x028:  movzbl 0x14(%eax),%eax
0874f0dc +0x02c:  mov    %esi,(%esp)
0874f0df +0x02f:  mov    %eax,-0x1c(%ebp)
0874f0e2 +0x032:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874f0e7 +0x037:  mov    -0x1c(%ebp),%edx
0874f0ea +0x03a:  mov    %edi,0x4(%esp)
0874f0ee +0x03e:  mov    %edx,0x8(%esp)
0874f0f2 +0x042:  add    $0x94,%eax
0874f0f7 +0x047:  mov    %eax,(%esp)
0874f0fa +0x04a:  call   0807d8a0 <_init+0x198>
0874f0ff +0x04f:  mov    %esi,(%esp)
0874f102 +0x052:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874f107 +0x057:  mov    -0x1c(%ebp),%edx
0874f10a +0x05a:  lea    (%edi,%edx,1),%edx
0874f10d +0x05d:  mov    %edx,0x4(%esp)
0874f111 +0x061:  add    $0xa8,%eax
0874f116 +0x066:  mov    %eax,(%esp)
0874f119 +0x069:  mov    -0x1c(%ebp),%eax
0874f11c +0x06c:  mov    %eax,0x8(%esp)
0874f120 +0x070:  call   0807d8a0 <_init+0x198>
0874f125 +0x075:  mov    -0x1c(%ebp),%edx
0874f128 +0x078:  mov    %esi,(%esp)
0874f12b +0x07b:  add    %edx,%edx
0874f12d +0x07d:  mov    %edx,-0x20(%ebp)
0874f130 +0x080:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874f135 +0x085:  movzbl 0xc(%eax),%eax
0874f139 +0x089:  mov    %esi,(%esp)
0874f13c +0x08c:  mov    %eax,-0x1c(%ebp)
0874f13f +0x08f:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874f144 +0x094:  mov    -0x1c(%ebp),%edx
0874f147 +0x097:  mov    %edx,0x8(%esp)
0874f14b +0x09b:  add    $0xbc,%eax
0874f150 +0x0a0:  mov    %eax,(%esp)
0874f153 +0x0a3:  mov    -0x20(%ebp),%eax
0874f156 +0x0a6:  lea    (%edi,%eax,1),%eax
0874f159 +0x0a9:  mov    %eax,0x4(%esp)
0874f15d +0x0ad:  call   0807d8a0 <_init+0x198>
0874f162 +0x0b2:  mov    -0x20(%ebp),%eax
0874f165 +0x0b5:  add    -0x1c(%ebp),%eax
0874f168 +0x0b8:  mov    %esi,(%esp)
0874f16b +0x0bb:  mov    %eax,-0x20(%ebp)
0874f16e +0x0be:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874f173 +0x0c3:  mov    -0x1c(%ebp),%edx
0874f176 +0x0c6:  mov    %edx,0x8(%esp)
0874f17a +0x0ca:  add    $0xdc,%eax
0874f17f +0x0cf:  mov    %eax,(%esp)
0874f182 +0x0d2:  mov    -0x20(%ebp),%eax
0874f185 +0x0d5:  lea    (%edi,%eax,1),%eax
0874f188 +0x0d8:  mov    %eax,0x4(%esp)
0874f18c +0x0dc:  call   0807d8a0 <_init+0x198>
0874f191 +0x0e1:  mov    -0x20(%ebp),%eax
0874f194 +0x0e4:  add    -0x1c(%ebp),%eax
0874f197 +0x0e7:  mov    %esi,(%esp)
0874f19a +0x0ea:  mov    %eax,-0x20(%ebp)
0874f19d +0x0ed:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874f1a2 +0x0f2:  movzbl 0xd(%eax),%eax
0874f1a6 +0x0f6:  mov    %esi,(%esp)
0874f1a9 +0x0f9:  mov    %eax,-0x1c(%ebp)
0874f1ac +0x0fc:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874f1b1 +0x101:  mov    -0x1c(%ebp),%edx
0874f1b4 +0x104:  mov    %edx,0x8(%esp)
0874f1b8 +0x108:  add    $0xfc,%eax
0874f1bd +0x10d:  mov    %eax,(%esp)
0874f1c0 +0x110:  mov    -0x20(%ebp),%eax
0874f1c3 +0x113:  lea    (%edi,%eax,1),%eax
0874f1c6 +0x116:  mov    %eax,0x4(%esp)
0874f1ca +0x11a:  call   0807d8a0 <_init+0x198>
0874f1cf +0x11f:  mov    %esi,(%esp)
0874f1d2 +0x122:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874f1d7 +0x127:  mov    -0x20(%ebp),%edx
0874f1da +0x12a:  add    -0x1c(%ebp),%edx
0874f1dd +0x12d:  add    %edx,%edi
0874f1df +0x12f:  mov    -0x1c(%ebp),%edx
0874f1e2 +0x132:  mov    %edi,0x4(%esp)
0874f1e6 +0x136:  add    $0x10c,%eax
0874f1eb +0x13b:  mov    %eax,(%esp)
0874f1ee +0x13e:  mov    %edx,0x8(%esp)
0874f1f2 +0x142:  call   0807d8a0 <_init+0x198>
0874f1f7 +0x147:  mov    -0x24(%ebp),%ecx
0874f1fa +0x14a:  mov    %ecx,(%esp)
0874f1fd +0x14d:  call   0874ed80 <_ZN5yaSSL3SSL7setKeysEv>  ; yaSSL::SSL::setKeys()
0874f202 +0x152:  add    $0x2c,%esp
0874f205 +0x155:  pop    %ebx
0874f206 +0x156:  pop    %esi
0874f207 +0x157:  pop    %edi
0874f208 +0x158:  pop    %ebp
0874f209 +0x159:  ret
0874f20a +0x15a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::SSL::storeKeys @ 0x874f0b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::storeKeys(unsigned char const*) */

void __thiscall yaSSL::SSL::storeKeys(SSL *this,uchar *param_1)

{
  Security *this_00;
  int iVar1;
  uint uVar2;
  uint __n;
  int iVar3;
  
  this_00 = (Security *)(this + 0x68);
  iVar1 = Security::get_parms(this_00);
  uVar2 = (uint)*(byte *)(iVar1 + 0x14);
  iVar1 = Security::use_connection(this_00);
  memcpy((void *)(iVar1 + 0x94),param_1,uVar2);
  iVar1 = Security::use_connection(this_00);
  memcpy((void *)(iVar1 + 0xa8),param_1 + uVar2,uVar2);
  iVar1 = Security::get_parms(this_00);
  __n = (uint)*(byte *)(iVar1 + 0xc);
  iVar1 = Security::use_connection(this_00);
  memcpy((void *)(iVar1 + 0xbc),param_1 + uVar2 * 2,__n);
  iVar3 = uVar2 * 2 + __n;
  iVar1 = Security::use_connection(this_00);
  memcpy((void *)(iVar1 + 0xdc),param_1 + iVar3,__n);
  iVar3 = iVar3 + __n;
  iVar1 = Security::get_parms(this_00);
  uVar2 = (uint)*(byte *)(iVar1 + 0xd);
  iVar1 = Security::use_connection(this_00);
  memcpy((void *)(iVar1 + 0xfc),param_1 + iVar3,uVar2);
  iVar1 = Security::use_connection(this_00);
  memcpy((void *)(iVar1 + 0x10c),param_1 + iVar3 + uVar2,uVar2);
  setKeys(this);
  return;
}
```
