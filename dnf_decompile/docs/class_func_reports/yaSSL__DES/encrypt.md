# encrypt

`_ZN5yaSSL3DES7encryptEPhPKhj`

`yaSSL::DES::encrypt(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::DES` | `0x0879b870` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879b870  _ZN5yaSSL3DES7encryptEPhPKhj
#           yaSSL::DES::encrypt(unsigned char*, unsigned char const*, unsigned int)
# range [0x0879b870, 0x0879ba3a]
0879b870 +0x000:  push   %ebp
0879b871 +0x001:  mov    %esp,%ebp
0879b873 +0x003:  push   %edi
0879b874 +0x004:  push   %esi
0879b875 +0x005:  push   %ebx
0879b876 +0x006:  sub    $0x4c,%esp
0879b879 +0x009:  mov    0x8(%ebp),%edx
0879b87c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
0879b881 +0x011:  add    $0xbd1317,%ebx
0879b887 +0x017:  mov    0xc(%ebp),%edi
0879b88a +0x01a:  mov    0x10(%ebp),%ecx
0879b88d +0x01d:  mov    0x14(%ebp),%eax
0879b890 +0x020:  mov    0x4(%edx),%esi
0879b893 +0x023:  mov    0x34(%esi),%edx
0879b896 +0x026:  test   %edx,%edx
0879b898 +0x028:  jne    0879b8e8 <+0x78>
0879b89a +0x02a:  xor    %edx,%edx
0879b89c +0x02c:  divl   0x4(%esi)
0879b89f +0x02f:  test   %eax,%eax
0879b8a1 +0x031:  mov    %eax,-0x2c(%ebp)
0879b8a4 +0x034:  je     0879b8e0 <+0x70>
0879b8a6 +0x036:  mov    %edi,%eax
0879b8a8 +0x038:  mov    %esi,%edi
0879b8aa +0x03a:  mov    -0x2c(%ebp),%esi
0879b8ad +0x03d:  lea    0x0(%esi),%esi
0879b8b0 +0x040:  mov    (%edi),%edx
0879b8b2 +0x042:  mov    %eax,-0x38(%ebp)
0879b8b5 +0x045:  mov    %eax,0xc(%esp)
0879b8b9 +0x049:  mov    %ecx,0x4(%esp)
0879b8bd +0x04d:  mov    %ecx,-0x34(%ebp)
0879b8c0 +0x050:  movl   $0x0,0x8(%esp)
0879b8c8 +0x058:  mov    %edi,(%esp)
0879b8cb +0x05b:  call   *0xc(%edx)
0879b8ce +0x05e:  mov    0x4(%edi),%edx
0879b8d1 +0x061:  mov    -0x38(%ebp),%eax
0879b8d4 +0x064:  mov    -0x34(%ebp),%ecx
0879b8d7 +0x067:  add    %edx,%eax
0879b8d9 +0x069:  add    %edx,%ecx
0879b8db +0x06b:  sub    $0x1,%esi
0879b8de +0x06e:  jne    0879b8b0 <+0x40>
0879b8e0 +0x070:  add    $0x4c,%esp
0879b8e3 +0x073:  pop    %ebx
0879b8e4 +0x074:  pop    %esi
0879b8e5 +0x075:  pop    %edi
0879b8e6 +0x076:  pop    %ebp
0879b8e7 +0x077:  ret
0879b8e8 +0x078:  cmp    $0x1,%edx
0879b8eb +0x07b:  jne    0879b8e0 <+0x70>
0879b8ed +0x07d:  mov    0x30(%esi),%edx
0879b8f0 +0x080:  test   %edx,%edx
0879b8f2 +0x082:  jne    0879b968 <+0xf8>
0879b8f4 +0x084:  xor    %edx,%edx
0879b8f6 +0x086:  divl   0x4(%esi)
0879b8f9 +0x089:  test   %eax,%eax
0879b8fb +0x08b:  mov    %eax,-0x2c(%ebp)
0879b8fe +0x08e:  je     0879b8e0 <+0x70>
0879b900 +0x090:  mov    0x4(%esi),%eax
0879b903 +0x093:  nop
0879b904 +0x094:  lea    0x0(%esi,%eiz,1),%esi
0879b908 +0x098:  mov    %ecx,0x4(%esp)
0879b90c +0x09c:  mov    %eax,0x8(%esp)
0879b910 +0x0a0:  mov    0x8(%esi),%eax
0879b913 +0x0a3:  mov    %ecx,-0x34(%ebp)
0879b916 +0x0a6:  mov    %eax,(%esp)
0879b919 +0x0a9:  call   08767410 <_ZN8TaoCrypt6xorbufEPhPKhj>  ; TaoCrypt::xorbuf(unsigned char*, unsigned char const*, unsigned int)
0879b91e +0x0ae:  mov    0x8(%esi),%eax
0879b921 +0x0b1:  mov    (%esi),%edx
0879b923 +0x0b3:  movl   $0x0,0x8(%esp)
0879b92b +0x0bb:  mov    %esi,(%esp)
0879b92e +0x0be:  mov    %eax,0xc(%esp)
0879b932 +0x0c2:  mov    %eax,0x4(%esp)
0879b936 +0x0c6:  call   *0xc(%edx)
0879b939 +0x0c9:  mov    0x8(%esi),%eax
0879b93c +0x0cc:  mov    0x4(%esi),%edx
0879b93f +0x0cf:  mov    %edi,(%esp)
0879b942 +0x0d2:  mov    %eax,0x4(%esp)
0879b946 +0x0d6:  mov    %edx,0x8(%esp)
0879b94a +0x0da:  call   0807d8a0 <_init+0x198>
0879b94f +0x0df:  mov    0x4(%esi),%eax
0879b952 +0x0e2:  mov    -0x34(%ebp),%ecx
0879b955 +0x0e5:  add    %eax,%edi
0879b957 +0x0e7:  add    %eax,%ecx
0879b959 +0x0e9:  subl   $0x1,-0x2c(%ebp)
0879b95d +0x0ed:  jne    0879b908 <+0x98>
0879b95f +0x0ef:  jmp    0879b8e0 <+0x70>
0879b964 +0x0f4:  lea    0x0(%esi,%eiz,1),%esi
0879b968 +0x0f8:  xor    %edx,%edx
0879b96a +0x0fa:  divl   0x4(%esi)
0879b96d +0x0fd:  test   %eax,%eax
0879b96f +0x0ff:  mov    %eax,-0x2c(%ebp)
0879b972 +0x102:  je     0879b8e0 <+0x70>
0879b978 +0x108:  mov    0x4(%esi),%eax
0879b97b +0x10b:  lea    -0x28(%ebp),%edx
0879b97e +0x10e:  mov    %edx,-0x30(%ebp)
0879b981 +0x111:  lea    0x0(%esi,%eiz,1),%esi
0879b988 +0x118:  mov    0xc(%esi),%edx
0879b98b +0x11b:  mov    %ecx,-0x34(%ebp)
0879b98e +0x11e:  mov    %ecx,0x4(%esp)
0879b992 +0x122:  mov    %eax,0x8(%esp)
0879b996 +0x126:  mov    %edx,(%esp)
0879b999 +0x129:  call   0807d8a0 <_init+0x198>
0879b99e +0x12e:  mov    (%esi),%eax
0879b9a0 +0x130:  mov    %edi,0xc(%esp)
0879b9a4 +0x134:  movl   $0x0,0x8(%esp)
0879b9ac +0x13c:  mov    0xc(%esi),%edx
0879b9af +0x13f:  mov    %esi,(%esp)
0879b9b2 +0x142:  mov    %edx,0x4(%esp)
0879b9b6 +0x146:  call   *0xc(%eax)
0879b9b9 +0x149:  mov    0x4(%esi),%eax
0879b9bc +0x14c:  mov    %eax,0x8(%esp)
0879b9c0 +0x150:  mov    0x8(%esi),%eax
0879b9c3 +0x153:  mov    %edi,(%esp)
0879b9c6 +0x156:  mov    %eax,0x4(%esp)
0879b9ca +0x15a:  call   08767410 <_ZN8TaoCrypt6xorbufEPhPKhj>  ; TaoCrypt::xorbuf(unsigned char*, unsigned char const*, unsigned int)
0879b9cf +0x15f:  mov    0x8(%esi),%eax
0879b9d2 +0x162:  mov    0x4(%esi),%edx
0879b9d5 +0x165:  mov    %eax,0x4(%esp)
0879b9d9 +0x169:  mov    -0x30(%ebp),%eax
0879b9dc +0x16c:  mov    %edx,0x8(%esp)
0879b9e0 +0x170:  mov    %eax,(%esp)
0879b9e3 +0x173:  call   0807d8a0 <_init+0x198>
0879b9e8 +0x178:  mov    0x8(%esi),%edx
0879b9eb +0x17b:  mov    0x4(%esi),%eax
0879b9ee +0x17e:  mov    %edx,-0x3c(%ebp)
0879b9f1 +0x181:  mov    0xc(%esi),%edx
0879b9f4 +0x184:  mov    %eax,0x8(%esp)
0879b9f8 +0x188:  mov    %edx,0x4(%esp)
0879b9fc +0x18c:  mov    -0x3c(%ebp),%edx
0879b9ff +0x18f:  mov    %edx,(%esp)
0879ba02 +0x192:  call   0807d8a0 <_init+0x198>
0879ba07 +0x197:  mov    0x4(%esi),%edx
0879ba0a +0x19a:  mov    0xc(%esi),%eax
0879ba0d +0x19d:  mov    %edx,0x8(%esp)
0879ba11 +0x1a1:  mov    -0x30(%ebp),%edx
0879ba14 +0x1a4:  mov    %eax,(%esp)
0879ba17 +0x1a7:  mov    %edx,0x4(%esp)
0879ba1b +0x1ab:  call   0807d8a0 <_init+0x198>
0879ba20 +0x1b0:  mov    0x4(%esi),%eax
0879ba23 +0x1b3:  mov    -0x34(%ebp),%ecx
0879ba26 +0x1b6:  add    %eax,%edi
0879ba28 +0x1b8:  add    %eax,%ecx
0879ba2a +0x1ba:  subl   $0x1,-0x2c(%ebp)
0879ba2e +0x1be:  jne    0879b988 <+0x118>
0879ba34 +0x1c4:  jmp    0879b8e0 <+0x70>
0879ba39 +0x1c9:  nop
0879ba3a +0x1ca:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::DES::encrypt @ 0x879b870

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES::encrypt(unsigned char*, unsigned char const*, unsigned int) */

void __thiscall yaSSL::DES::encrypt(DES *this,uchar *param_1,uchar *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  size_t __n;
  uint local_30;
  undefined1 local_2c [28];
  
  piVar1 = *(int **)(this + 4);
  if (piVar1[0xd] == 0) {
    for (uVar2 = param_3 / (uint)piVar1[1]; uVar2 != 0; uVar2 = uVar2 - 1) {
      (**(code **)(*piVar1 + 0xc))(piVar1,param_2,0,param_1);
      param_1 = param_1 + piVar1[1];
      param_2 = param_2 + piVar1[1];
    }
  }
  else if (piVar1[0xd] == 1) {
    if (piVar1[0xc] == 0) {
      local_30 = param_3 / (uint)piVar1[1];
      if (local_30 != 0) {
        uVar2 = piVar1[1];
        do {
          TaoCrypt::xorbuf((uchar *)piVar1[2],param_2,uVar2);
          (**(code **)(*piVar1 + 0xc))(piVar1,piVar1[2],0,piVar1[2]);
          memcpy(param_1,(void *)piVar1[2],piVar1[1]);
          uVar2 = piVar1[1];
          param_1 = param_1 + uVar2;
          param_2 = param_2 + uVar2;
          local_30 = local_30 - 1;
        } while (local_30 != 0);
      }
    }
    else {
      local_30 = param_3 / (uint)piVar1[1];
      if (local_30 != 0) {
        __n = piVar1[1];
        do {
          memcpy((void *)piVar1[3],param_2,__n);
          (**(code **)(*piVar1 + 0xc))(piVar1,piVar1[3],0,param_1);
          TaoCrypt::xorbuf(param_1,(uchar *)piVar1[2],piVar1[1]);
          memcpy(local_2c,(void *)piVar1[2],piVar1[1]);
          memcpy((void *)piVar1[2],(void *)piVar1[3],piVar1[1]);
          memcpy((void *)piVar1[3],local_2c,piVar1[1]);
          __n = piVar1[1];
          param_1 = param_1 + __n;
          param_2 = param_2 + __n;
          local_30 = local_30 - 1;
        } while (local_30 != 0);
      }
    }
  }
  return;
}
```
