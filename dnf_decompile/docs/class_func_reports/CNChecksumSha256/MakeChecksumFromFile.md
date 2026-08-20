# MakeChecksumFromFile

`_ZN16CNChecksumSha25620MakeChecksumFromFileEPKcPhi`

`CNChecksumSha256::MakeChecksumFromFile(char const*, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha256` | `0x08098850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098850  _ZN16CNChecksumSha25620MakeChecksumFromFileEPKcPhi
#           CNChecksumSha256::MakeChecksumFromFile(char const*, unsigned char*, int)
# range [0x08098850, 0x080989d5]
08098850 +0x000:  push   %ebp
08098851 +0x001:  mov    %esp,%ebp
08098853 +0x003:  sub    $0x428,%esp
08098859 +0x009:  mov    0x8(%ebp),%eax
0809885c +0x00c:  mov    0x8(%eax),%eax
0809885f +0x00f:  test   %eax,%eax
08098861 +0x011:  jne    0809886d <+0x1d>
08098863 +0x013:  mov    $0x70000000,%eax
08098868 +0x018:  jmp    080989d3 <+0x183>
0809886d +0x01d:  mov    0x8(%ebp),%eax
08098870 +0x020:  mov    (%eax),%eax
08098872 +0x022:  add    $0x20,%eax
08098875 +0x025:  mov    (%eax),%edx
08098877 +0x027:  mov    0x8(%ebp),%eax
0809887a +0x02a:  mov    %eax,(%esp)
0809887d +0x02d:  call   *%edx
0809887f +0x02f:  cmp    0x14(%ebp),%eax
08098882 +0x032:  setg   %al
08098885 +0x035:  test   %al,%al
08098887 +0x037:  je     08098893 <+0x43>
08098889 +0x039:  mov    $0x70000001,%eax
0809888e +0x03e:  jmp    080989d3 <+0x183>
08098893 +0x043:  cmpl   $0x0,0xc(%ebp)
08098897 +0x047:  jne    080988a3 <+0x53>
08098899 +0x049:  mov    $0x70000003,%eax
0809889e +0x04e:  jmp    080989d3 <+0x183>
080988a3 +0x053:  mov    0x8(%ebp),%eax
080988a6 +0x056:  mov    0x8(%eax),%eax
080988a9 +0x059:  mov    %eax,(%esp)
080988ac +0x05c:  call   080be020 <_Z11SHA256_InitP15SHA256_ALG_INFO>  ; SHA256_Init(SHA256_ALG_INFO*)
080988b1 +0x061:  movl   $"rb",0x4(%esp)
080988b9 +0x069:  mov    0xc(%ebp),%eax
080988bc +0x06c:  mov    %eax,(%esp)
080988bf +0x06f:  call   0807e770 <_init+0x1068>
080988c4 +0x074:  mov    %eax,-0x18(%ebp)
080988c7 +0x077:  cmpl   $0x0,-0x18(%ebp)
080988cb +0x07b:  jne    080988d7 <+0x87>
080988cd +0x07d:  mov    $0x70000002,%eax
080988d2 +0x082:  jmp    080989d3 <+0x183>
080988d7 +0x087:  movl   $0x2,0x8(%esp)
080988df +0x08f:  movl   $0x0,0x4(%esp)
080988e7 +0x097:  mov    -0x18(%ebp),%eax
080988ea +0x09a:  mov    %eax,(%esp)
080988ed +0x09d:  call   0807e0b0 <_init+0x9a8>
080988f2 +0x0a2:  mov    -0x18(%ebp),%eax
080988f5 +0x0a5:  mov    %eax,(%esp)
080988f8 +0x0a8:  call   0807d9d0 <_init+0x2c8>
080988fd +0x0ad:  mov    %eax,-0x14(%ebp)
08098900 +0x0b0:  cmpl   $0x0,-0x14(%ebp)
08098904 +0x0b4:  jns    0809891b <+0xcb>
08098906 +0x0b6:  mov    -0x18(%ebp),%eax
08098909 +0x0b9:  mov    %eax,(%esp)
0809890c +0x0bc:  call   0807dea0 <_init+0x798>
08098911 +0x0c1:  mov    $0x70000003,%eax
08098916 +0x0c6:  jmp    080989d3 <+0x183>
0809891b +0x0cb:  movl   $0x0,0x8(%esp)
08098923 +0x0d3:  movl   $0x0,0x4(%esp)
0809892b +0x0db:  mov    -0x18(%ebp),%eax
0809892e +0x0de:  mov    %eax,(%esp)
08098931 +0x0e1:  call   0807e0b0 <_init+0x9a8>
08098936 +0x0e6:  movl   $0x0,-0x10(%ebp)
0809893d +0x0ed:  jmp    080989a1 <+0x151>
0809893f +0x0ef:  mov    -0x14(%ebp),%eax
08098942 +0x0f2:  sub    -0x10(%ebp),%eax
08098945 +0x0f5:  mov    %eax,-0xc(%ebp)
08098948 +0x0f8:  cmpl   $0x400,-0xc(%ebp)
0809894f +0x0ff:  jbe    08098958 <+0x108>
08098951 +0x101:  movl   $0x400,-0xc(%ebp)
08098958 +0x108:  mov    -0x18(%ebp),%eax
0809895b +0x10b:  mov    %eax,0xc(%esp)
0809895f +0x10f:  movl   $0x1,0x8(%esp)
08098967 +0x117:  mov    -0xc(%ebp),%eax
0809896a +0x11a:  mov    %eax,0x4(%esp)
0809896e +0x11e:  lea    -0x418(%ebp),%eax
08098974 +0x124:  mov    %eax,(%esp)
08098977 +0x127:  call   0807dd50 <_init+0x648>
0809897c +0x12c:  mov    0x8(%ebp),%eax
0809897f +0x12f:  mov    0x8(%eax),%eax
08098982 +0x132:  mov    -0xc(%ebp),%edx
08098985 +0x135:  mov    %edx,0x8(%esp)
08098989 +0x139:  lea    -0x418(%ebp),%edx
0809898f +0x13f:  mov    %edx,0x4(%esp)
08098993 +0x143:  mov    %eax,(%esp)
08098996 +0x146:  call   080be08a <_Z13SHA256_UpdateP15SHA256_ALG_INFOPhm>  ; SHA256_Update(SHA256_ALG_INFO*, unsigned char*, unsigned long)
0809899b +0x14b:  mov    -0xc(%ebp),%eax
0809899e +0x14e:  add    %eax,-0x10(%ebp)
080989a1 +0x151:  mov    -0x14(%ebp),%eax
080989a4 +0x154:  cmp    -0x10(%ebp),%eax
080989a7 +0x157:  seta   %al
080989aa +0x15a:  test   %al,%al
080989ac +0x15c:  jne    0809893f <+0xef>
080989ae +0x15e:  mov    0x8(%ebp),%eax
080989b1 +0x161:  mov    0x8(%eax),%eax
080989b4 +0x164:  mov    0x10(%ebp),%edx
080989b7 +0x167:  mov    %edx,0x4(%esp)
080989bb +0x16b:  mov    %eax,(%esp)
080989be +0x16e:  call   080be1d1 <_Z12SHA256_FinalP15SHA256_ALG_INFOPh>  ; SHA256_Final(SHA256_ALG_INFO*, unsigned char*)
080989c3 +0x173:  mov    -0x18(%ebp),%eax
080989c6 +0x176:  mov    %eax,(%esp)
080989c9 +0x179:  call   0807dea0 <_init+0x798>
080989ce +0x17e:  mov    $0x6fffffff,%eax
080989d3 +0x183:  leave
080989d4 +0x184:  ret
080989d5 +0x185:  nop
```

## 反编译 C

```c
// CNChecksumSha256::MakeChecksumFromFile @ 0x8098850

/* CNChecksumSha256::MakeChecksumFromFile(char const*, unsigned char*, int) */

undefined4 __thiscall
CNChecksumSha256::MakeChecksumFromFile
          (CNChecksumSha256 *this,char *param_1,uchar *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uchar local_41c [1024];
  FILE *local_1c;
  uint local_18;
  uint local_14;
  size_t local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_3 < iVar2) {
      uVar1 = 0x70000001;
    }
    else if (param_1 == (char *)0x0) {
      uVar1 = 0x70000003;
    }
    else {
      SHA256_Init(*(SHA256_ALG_INFO **)(this + 8));
      local_1c = fopen(param_1,"rb");
      if (local_1c == (FILE *)0x0) {
        uVar1 = 0x70000002;
      }
      else {
        fseek(local_1c,0,2);
        local_18 = ftell(local_1c);
        if ((int)local_18 < 0) {
          fclose(local_1c);
          uVar1 = 0x70000003;
        }
        else {
          fseek(local_1c,0,0);
          for (local_14 = 0; local_14 < local_18; local_14 = local_14 + local_10) {
            local_10 = local_18 - local_14;
            if (0x400 < local_10) {
              local_10 = 0x400;
            }
            fread(local_41c,local_10,1,local_1c);
            SHA256_Update(*(SHA256_ALG_INFO **)(this + 8),local_41c,local_10);
          }
          SHA256_Final(*(SHA256_ALG_INFO **)(this + 8),param_2);
          fclose(local_1c);
          uVar1 = 0x6fffffff;
        }
      }
    }
  }
  return uVar1;
}
```
