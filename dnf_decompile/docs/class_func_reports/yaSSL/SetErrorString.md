# SetErrorString

`_ZN5yaSSL14SetErrorStringENS_10YasslErrorEPc`

`yaSSL::SetErrorString(yaSSL::YasslError, char*)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08746630` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746630  _ZN5yaSSL14SetErrorStringENS_10YasslErrorEPc
#           yaSSL::SetErrorString(yaSSL::YasslError, char*)
# range [0x08746630, 0x0874693f]
08746630 +0x000:  push   %ebp
08746631 +0x001:  mov    %esp,%ebp
08746633 +0x003:  push   %ebx
08746634 +0x004:  sub    $0x14,%esp
08746637 +0x007:  mov    0x8(%ebp),%eax
0874663a +0x00a:  call   08722df8 <__i686.get_pc_thunk.bx>
0874663f +0x00f:  add    $0xc26559,%ebx
08746645 +0x015:  mov    0xc(%ebp),%edx
08746648 +0x018:  cmp    $0x78,%eax
0874664b +0x01b:  jbe    08746670 <+0x40>
0874664d +0x01d:  lea    -0x66802c(%ebx),%eax
08746653 +0x023:  movl   $0x50,0x8(%esp)
0874665b +0x02b:  mov    %eax,0x4(%esp)
0874665f +0x02f:  mov    %edx,(%esp)
08746662 +0x032:  call   0807d8d0 <_init+0x1c8>
08746667 +0x037:  nop
08746668 +0x038:  add    $0x14,%esp
0874666b +0x03b:  pop    %ebx
0874666c +0x03c:  pop    %ebp
0874666d +0x03d:  ret
0874666e +0x03e:  xchg   %ax,%ax
08746670 +0x040:  mov    -0x668014(%ebx,%eax,4),%eax
08746677 +0x047:  add    %ebx,%eax
08746679 +0x049:  jmp    *%eax
0874667b +0x04b:  nop
0874667c +0x04c:  lea    0x0(%esi,%eiz,1),%esi
08746680 +0x050:  lea    -0x668150(%ebx),%eax
08746686 +0x056:  movl   $0x50,0x8(%esp)
0874668e +0x05e:  mov    %eax,0x4(%esp)
08746692 +0x062:  mov    %edx,(%esp)
08746695 +0x065:  call   0807d8d0 <_init+0x1c8>
0874669a +0x06a:  jmp    08746668 <+0x38>
0874669c +0x06c:  lea    0x0(%esi,%eiz,1),%esi
087466a0 +0x070:  lea    -0x668053(%ebx),%eax
087466a6 +0x076:  movl   $0x50,0x8(%esp)
087466ae +0x07e:  mov    %eax,0x4(%esp)
087466b2 +0x082:  mov    %edx,(%esp)
087466b5 +0x085:  call   0807d8d0 <_init+0x1c8>
087466ba +0x08a:  jmp    08746668 <+0x38>
087466bc +0x08c:  lea    0x0(%esi,%eiz,1),%esi
087466c0 +0x090:  lea    -0x668051(%ebx),%eax
087466c6 +0x096:  movl   $0x50,0x8(%esp)
087466ce +0x09e:  mov    %eax,0x4(%esp)
087466d2 +0x0a2:  mov    %edx,(%esp)
087466d5 +0x0a5:  call   0807d8d0 <_init+0x1c8>
087466da +0x0aa:  jmp    08746668 <+0x38>
087466dc +0x0ac:  lea    0x0(%esi,%eiz,1),%esi
087466e0 +0x0b0:  lea    -0x66806c(%ebx),%eax
087466e6 +0x0b6:  movl   $0x50,0x8(%esp)
087466ee +0x0be:  mov    %eax,0x4(%esp)
087466f2 +0x0c2:  mov    %edx,(%esp)
087466f5 +0x0c5:  call   0807d8d0 <_init+0x1c8>
087466fa +0x0ca:  jmp    08746668 <+0x38>
087466ff +0x0cf:  nop
08746700 +0x0d0:  lea    -0x66817c(%ebx),%eax
08746706 +0x0d6:  movl   $0x50,0x8(%esp)
0874670e +0x0de:  mov    %eax,0x4(%esp)
08746712 +0x0e2:  mov    %edx,(%esp)
08746715 +0x0e5:  call   0807d8d0 <_init+0x1c8>
0874671a +0x0ea:  jmp    08746668 <+0x38>
0874671f +0x0ef:  nop
08746720 +0x0f0:  lea    -0x66808a(%ebx),%eax
08746726 +0x0f6:  movl   $0x50,0x8(%esp)
0874672e +0x0fe:  mov    %eax,0x4(%esp)
08746732 +0x102:  mov    %edx,(%esp)
08746735 +0x105:  call   0807d8d0 <_init+0x1c8>
0874673a +0x10a:  jmp    08746668 <+0x38>
0874673f +0x10f:  nop
08746740 +0x110:  lea    -0x6680a5(%ebx),%eax
08746746 +0x116:  movl   $0x50,0x8(%esp)
0874674e +0x11e:  mov    %eax,0x4(%esp)
08746752 +0x122:  mov    %edx,(%esp)
08746755 +0x125:  call   0807d8d0 <_init+0x1c8>
0874675a +0x12a:  jmp    08746668 <+0x38>
0874675f +0x12f:  nop
08746760 +0x130:  lea    -0x6680bd(%ebx),%eax
08746766 +0x136:  movl   $0x50,0x8(%esp)
0874676e +0x13e:  mov    %eax,0x4(%esp)
08746772 +0x142:  mov    %edx,(%esp)
08746775 +0x145:  call   0807d8d0 <_init+0x1c8>
0874677a +0x14a:  jmp    08746668 <+0x38>
0874677f +0x14f:  nop
08746780 +0x150:  lea    -0x66819c(%ebx),%eax
08746786 +0x156:  movl   $0x50,0x8(%esp)
0874678e +0x15e:  mov    %eax,0x4(%esp)
08746792 +0x162:  mov    %edx,(%esp)
08746795 +0x165:  call   0807d8d0 <_init+0x1c8>
0874679a +0x16a:  jmp    08746668 <+0x38>
0874679f +0x16f:  nop
087467a0 +0x170:  lea    -0x6681c0(%ebx),%eax
087467a6 +0x176:  movl   $0x50,0x8(%esp)
087467ae +0x17e:  mov    %eax,0x4(%esp)
087467b2 +0x182:  mov    %edx,(%esp)
087467b5 +0x185:  call   0807d8d0 <_init+0x1c8>
087467ba +0x18a:  jmp    08746668 <+0x38>
087467bf +0x18f:  nop
087467c0 +0x190:  lea    -0x6681ec(%ebx),%eax
087467c6 +0x196:  movl   $0x50,0x8(%esp)
087467ce +0x19e:  mov    %eax,0x4(%esp)
087467d2 +0x1a2:  mov    %edx,(%esp)
087467d5 +0x1a5:  call   0807d8d0 <_init+0x1c8>
087467da +0x1aa:  jmp    08746668 <+0x38>
087467df +0x1af:  nop
087467e0 +0x1b0:  lea    -0x6680d4(%ebx),%eax
087467e6 +0x1b6:  movl   $0x50,0x8(%esp)
087467ee +0x1be:  mov    %eax,0x4(%esp)
087467f2 +0x1c2:  mov    %edx,(%esp)
087467f5 +0x1c5:  call   0807d8d0 <_init+0x1c8>
087467fa +0x1ca:  jmp    08746668 <+0x38>
087467ff +0x1cf:  nop
08746800 +0x1d0:  lea    -0x668218(%ebx),%eax
08746806 +0x1d6:  movl   $0x50,0x8(%esp)
0874680e +0x1de:  mov    %eax,0x4(%esp)
08746812 +0x1e2:  mov    %edx,(%esp)
08746815 +0x1e5:  call   0807d8d0 <_init+0x1c8>
0874681a +0x1ea:  jmp    08746668 <+0x38>
0874681f +0x1ef:  nop
08746820 +0x1f0:  lea    -0x6680f2(%ebx),%eax
08746826 +0x1f6:  movl   $0x50,0x8(%esp)
0874682e +0x1fe:  mov    %eax,0x4(%esp)
08746832 +0x202:  mov    %edx,(%esp)
08746835 +0x205:  call   0807d8d0 <_init+0x1c8>
0874683a +0x20a:  jmp    08746668 <+0x38>
0874683f +0x20f:  nop
08746840 +0x210:  lea    -0x66810d(%ebx),%eax
08746846 +0x216:  movl   $0x50,0x8(%esp)
0874684e +0x21e:  mov    %eax,0x4(%esp)
08746852 +0x222:  mov    %edx,(%esp)
08746855 +0x225:  call   0807d8d0 <_init+0x1c8>
0874685a +0x22a:  jmp    08746668 <+0x38>
0874685f +0x22f:  nop
08746860 +0x230:  lea    -0x668248(%ebx),%eax
08746866 +0x236:  movl   $0x50,0x8(%esp)
0874686e +0x23e:  mov    %eax,0x4(%esp)
08746872 +0x242:  mov    %edx,(%esp)
08746875 +0x245:  call   0807d8d0 <_init+0x1c8>
0874687a +0x24a:  jmp    08746668 <+0x38>
0874687f +0x24f:  nop
08746880 +0x250:  lea    -0x668268(%ebx),%eax
08746886 +0x256:  movl   $0x50,0x8(%esp)
0874688e +0x25e:  mov    %eax,0x4(%esp)
08746892 +0x262:  mov    %edx,(%esp)
08746895 +0x265:  call   0807d8d0 <_init+0x1c8>
0874689a +0x26a:  jmp    08746668 <+0x38>
0874689f +0x26f:  nop
087468a0 +0x270:  lea    -0x668288(%ebx),%eax
087468a6 +0x276:  movl   $0x50,0x8(%esp)
087468ae +0x27e:  mov    %eax,0x4(%esp)
087468b2 +0x282:  mov    %edx,(%esp)
087468b5 +0x285:  call   0807d8d0 <_init+0x1c8>
087468ba +0x28a:  jmp    08746668 <+0x38>
087468bf +0x28f:  nop
087468c0 +0x290:  lea    -0x6682ac(%ebx),%eax
087468c6 +0x296:  movl   $0x50,0x8(%esp)
087468ce +0x29e:  mov    %eax,0x4(%esp)
087468d2 +0x2a2:  mov    %edx,(%esp)
087468d5 +0x2a5:  call   0807d8d0 <_init+0x1c8>
087468da +0x2aa:  jmp    08746668 <+0x38>
087468df +0x2af:  nop
087468e0 +0x2b0:  lea    -0x6682d0(%ebx),%eax
087468e6 +0x2b6:  movl   $0x50,0x8(%esp)
087468ee +0x2be:  mov    %eax,0x4(%esp)
087468f2 +0x2c2:  mov    %edx,(%esp)
087468f5 +0x2c5:  call   0807d8d0 <_init+0x1c8>
087468fa +0x2ca:  jmp    08746668 <+0x38>
087468ff +0x2cf:  nop
08746900 +0x2d0:  lea    -0x66812c(%ebx),%eax
08746906 +0x2d6:  movl   $0x50,0x8(%esp)
0874690e +0x2de:  mov    %eax,0x4(%esp)
08746912 +0x2e2:  mov    %edx,(%esp)
08746915 +0x2e5:  call   0807d8d0 <_init+0x1c8>
0874691a +0x2ea:  jmp    08746668 <+0x38>
0874691f +0x2ef:  nop
08746920 +0x2f0:  lea    -0x66803f(%ebx),%eax
08746926 +0x2f6:  movl   $0x50,0x8(%esp)
0874692e +0x2fe:  mov    %eax,0x4(%esp)
08746932 +0x302:  mov    %edx,(%esp)
08746935 +0x305:  call   0807d8d0 <_init+0x1c8>
0874693a +0x30a:  jmp    08746668 <+0x38>
0874693f +0x30f:  nop
```

## 反编译 C

```c
// yaSSL::SetErrorString @ 0x8746630

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SetErrorString(yaSSL::YasslError, char*) */

void yaSSL::SetErrorString(undefined4 param_1,char *param_2)

{
  switch(param_1) {
  case 0:
    strncpy(param_2,"not in error state",0x50);
    break;
  default:
    strncpy(param_2,"unknown error number",0x50);
    break;
  case 0x50:
    strncpy(param_2,"the read operation would block",0x50);
    break;
  case 0x65:
    strncpy(param_2,"buffer index error, out of range",0x50);
    break;
  case 0x66:
    strncpy(param_2,"trying to realloc a fixed buffer",0x50);
    break;
  case 0x67:
    strncpy(param_2,"unknown factory create request",0x50);
    break;
  case 0x68:
    strncpy(param_2,"trying to use an unknown cipher",0x50);
    break;
  case 0x69:
    strncpy(param_2,"bad master secret derivation, prefix too big",0x50);
    break;
  case 0x6a:
    strncpy(param_2,"record layer not ready yet",0x50);
    break;
  case 0x6b:
    strncpy(param_2,"handshake layer not ready yet",0x50);
    break;
  case 0x6c:
    strncpy(param_2,"handshake message received in wrong order",0x50);
    break;
  case 0x6d:
    strncpy(param_2,"bad cipher suite input",0x50);
    break;
  case 0x6e:
    strncpy(param_2,"unable to match a supported cipher suite",0x50);
    break;
  case 0x6f:
    strncpy(param_2,"the server needs a private key file",0x50);
    break;
  case 0x70:
    strncpy(param_2,"unable to verify peer checksum",0x50);
    break;
  case 0x71:
    strncpy(param_2,"socket layer send error",0x50);
    break;
  case 0x72:
    strncpy(param_2,"socket layer receive error",0x50);
    break;
  case 0x73:
    strncpy(param_2,"unable to proccess cerificate",0x50);
    break;
  case 0x74:
    strncpy(param_2,"unable to proccess private key, bad format",0x50);
    break;
  case 0x75:
    strncpy(param_2,"protocl version mismatch",0x50);
    break;
  case 0x76:
    strncpy(param_2,"compression error",0x50);
    break;
  case 0x77:
    strncpy(param_2,"decompression error",0x50);
    break;
  case 0x78:
    strncpy(param_2,"bad PreMasterSecret version error",0x50);
  }
  return;
}
```
