# MakeChecksumFromFile

`_ZN16CNChecksumSha51220MakeChecksumFromFileEPKcPhi`

`CNChecksumSha512::MakeChecksumFromFile(char const*, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha512` | `0x08099018` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08099018  _ZN16CNChecksumSha51220MakeChecksumFromFileEPKcPhi
#           CNChecksumSha512::MakeChecksumFromFile(char const*, unsigned char*, int)
# range [0x08099018, 0x0809919d]
08099018 +0x000:  push   %ebp
08099019 +0x001:  mov    %esp,%ebp
0809901b +0x003:  sub    $0x428,%esp
08099021 +0x009:  mov    0x8(%ebp),%eax
08099024 +0x00c:  mov    0x8(%eax),%eax
08099027 +0x00f:  test   %eax,%eax
08099029 +0x011:  jne    08099035 <+0x1d>
0809902b +0x013:  mov    $0x70000000,%eax
08099030 +0x018:  jmp    0809919b <+0x183>
08099035 +0x01d:  mov    0x8(%ebp),%eax
08099038 +0x020:  mov    (%eax),%eax
0809903a +0x022:  add    $0x20,%eax
0809903d +0x025:  mov    (%eax),%edx
0809903f +0x027:  mov    0x8(%ebp),%eax
08099042 +0x02a:  mov    %eax,(%esp)
08099045 +0x02d:  call   *%edx
08099047 +0x02f:  cmp    0x14(%ebp),%eax
0809904a +0x032:  setg   %al
0809904d +0x035:  test   %al,%al
0809904f +0x037:  je     0809905b <+0x43>
08099051 +0x039:  mov    $0x70000001,%eax
08099056 +0x03e:  jmp    0809919b <+0x183>
0809905b +0x043:  cmpl   $0x0,0xc(%ebp)
0809905f +0x047:  jne    0809906b <+0x53>
08099061 +0x049:  mov    $0x70000003,%eax
08099066 +0x04e:  jmp    0809919b <+0x183>
0809906b +0x053:  mov    0x8(%ebp),%eax
0809906e +0x056:  mov    0x8(%eax),%eax
08099071 +0x059:  mov    %eax,(%esp)
08099074 +0x05c:  call   080c27f1 <_Z11SHA512_InitP15SHA512_ALG_INFO>  ; SHA512_Init(SHA512_ALG_INFO*)
08099079 +0x061:  movl   $"rb",0x4(%esp)
08099081 +0x069:  mov    0xc(%ebp),%eax
08099084 +0x06c:  mov    %eax,(%esp)
08099087 +0x06f:  call   0807e770 <_init+0x1068>
0809908c +0x074:  mov    %eax,-0x18(%ebp)
0809908f +0x077:  cmpl   $0x0,-0x18(%ebp)
08099093 +0x07b:  jne    0809909f <+0x87>
08099095 +0x07d:  mov    $0x70000002,%eax
0809909a +0x082:  jmp    0809919b <+0x183>
0809909f +0x087:  movl   $0x2,0x8(%esp)
080990a7 +0x08f:  movl   $0x0,0x4(%esp)
080990af +0x097:  mov    -0x18(%ebp),%eax
080990b2 +0x09a:  mov    %eax,(%esp)
080990b5 +0x09d:  call   0807e0b0 <_init+0x9a8>
080990ba +0x0a2:  mov    -0x18(%ebp),%eax
080990bd +0x0a5:  mov    %eax,(%esp)
080990c0 +0x0a8:  call   0807d9d0 <_init+0x2c8>
080990c5 +0x0ad:  mov    %eax,-0x14(%ebp)
080990c8 +0x0b0:  cmpl   $0x0,-0x14(%ebp)
080990cc +0x0b4:  jns    080990e3 <+0xcb>
080990ce +0x0b6:  mov    -0x18(%ebp),%eax
080990d1 +0x0b9:  mov    %eax,(%esp)
080990d4 +0x0bc:  call   0807dea0 <_init+0x798>
080990d9 +0x0c1:  mov    $0x70000003,%eax
080990de +0x0c6:  jmp    0809919b <+0x183>
080990e3 +0x0cb:  movl   $0x0,0x8(%esp)
080990eb +0x0d3:  movl   $0x0,0x4(%esp)
080990f3 +0x0db:  mov    -0x18(%ebp),%eax
080990f6 +0x0de:  mov    %eax,(%esp)
080990f9 +0x0e1:  call   0807e0b0 <_init+0x9a8>
080990fe +0x0e6:  movl   $0x0,-0x10(%ebp)
08099105 +0x0ed:  jmp    08099169 <+0x151>
08099107 +0x0ef:  mov    -0x14(%ebp),%eax
0809910a +0x0f2:  sub    -0x10(%ebp),%eax
0809910d +0x0f5:  mov    %eax,-0xc(%ebp)
08099110 +0x0f8:  cmpl   $0x400,-0xc(%ebp)
08099117 +0x0ff:  jbe    08099120 <+0x108>
08099119 +0x101:  movl   $0x400,-0xc(%ebp)
08099120 +0x108:  mov    -0x18(%ebp),%eax
08099123 +0x10b:  mov    %eax,0xc(%esp)
08099127 +0x10f:  movl   $0x1,0x8(%esp)
0809912f +0x117:  mov    -0xc(%ebp),%eax
08099132 +0x11a:  mov    %eax,0x4(%esp)
08099136 +0x11e:  lea    -0x418(%ebp),%eax
0809913c +0x124:  mov    %eax,(%esp)
0809913f +0x127:  call   0807dd50 <_init+0x648>
08099144 +0x12c:  mov    0x8(%ebp),%eax
08099147 +0x12f:  mov    0x8(%eax),%eax
0809914a +0x132:  mov    -0xc(%ebp),%edx
0809914d +0x135:  mov    %edx,0x8(%esp)
08099151 +0x139:  lea    -0x418(%ebp),%edx
08099157 +0x13f:  mov    %edx,0x4(%esp)
0809915b +0x143:  mov    %eax,(%esp)
0809915e +0x146:  call   080c28b9 <_Z13SHA512_UpdateP15SHA512_ALG_INFOPhm>  ; SHA512_Update(SHA512_ALG_INFO*, unsigned char*, unsigned long)
08099163 +0x14b:  mov    -0xc(%ebp),%eax
08099166 +0x14e:  add    %eax,-0x10(%ebp)
08099169 +0x151:  mov    -0x14(%ebp),%eax
0809916c +0x154:  cmp    -0x10(%ebp),%eax
0809916f +0x157:  seta   %al
08099172 +0x15a:  test   %al,%al
08099174 +0x15c:  jne    08099107 <+0xef>
08099176 +0x15e:  mov    0x8(%ebp),%eax
08099179 +0x161:  mov    0x8(%eax),%eax
0809917c +0x164:  mov    0x10(%ebp),%edx
0809917f +0x167:  mov    %edx,0x4(%esp)
08099183 +0x16b:  mov    %eax,(%esp)
08099186 +0x16e:  call   080c2a7e <_Z12SHA512_FinalP15SHA512_ALG_INFOPh>  ; SHA512_Final(SHA512_ALG_INFO*, unsigned char*)
0809918b +0x173:  mov    -0x18(%ebp),%eax
0809918e +0x176:  mov    %eax,(%esp)
08099191 +0x179:  call   0807dea0 <_init+0x798>
08099196 +0x17e:  mov    $0x6fffffff,%eax
0809919b +0x183:  leave
0809919c +0x184:  ret
0809919d +0x185:  nop
```

## 反编译 C

```c
// CNChecksumSha512::MakeChecksumFromFile @ 0x8099018

/* CNChecksumSha512::MakeChecksumFromFile(char const*, unsigned char*, int) */

undefined4 __thiscall
CNChecksumSha512::MakeChecksumFromFile
          (CNChecksumSha512 *this,char *param_1,uchar *param_2,int param_3)

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
      SHA512_Init(*(SHA512_ALG_INFO **)(this + 8));
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
            SHA512_Update(*(SHA512_ALG_INFO **)(this + 8),local_41c,local_10);
          }
          SHA512_Final(*(SHA512_ALG_INFO **)(this + 8),param_2);
          fclose(local_1c);
          uVar1 = 0x6fffffff;
        }
      }
    }
  }
  return uVar1;
}
```
