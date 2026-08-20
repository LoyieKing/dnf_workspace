# MakeChecksumFromFile

`_ZN16CNChecksumSha38420MakeChecksumFromFileEPKcPhi`

`CNChecksumSha384::MakeChecksumFromFile(char const*, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha384` | `0x08098c34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098c34  _ZN16CNChecksumSha38420MakeChecksumFromFileEPKcPhi
#           CNChecksumSha384::MakeChecksumFromFile(char const*, unsigned char*, int)
# range [0x08098c34, 0x08098db9]
08098c34 +0x000:  push   %ebp
08098c35 +0x001:  mov    %esp,%ebp
08098c37 +0x003:  sub    $0x428,%esp
08098c3d +0x009:  mov    0x8(%ebp),%eax
08098c40 +0x00c:  mov    0x8(%eax),%eax
08098c43 +0x00f:  test   %eax,%eax
08098c45 +0x011:  jne    08098c51 <+0x1d>
08098c47 +0x013:  mov    $0x70000000,%eax
08098c4c +0x018:  jmp    08098db7 <+0x183>
08098c51 +0x01d:  mov    0x8(%ebp),%eax
08098c54 +0x020:  mov    (%eax),%eax
08098c56 +0x022:  add    $0x20,%eax
08098c59 +0x025:  mov    (%eax),%edx
08098c5b +0x027:  mov    0x8(%ebp),%eax
08098c5e +0x02a:  mov    %eax,(%esp)
08098c61 +0x02d:  call   *%edx
08098c63 +0x02f:  cmp    0x14(%ebp),%eax
08098c66 +0x032:  setg   %al
08098c69 +0x035:  test   %al,%al
08098c6b +0x037:  je     08098c77 <+0x43>
08098c6d +0x039:  mov    $0x70000001,%eax
08098c72 +0x03e:  jmp    08098db7 <+0x183>
08098c77 +0x043:  cmpl   $0x0,0xc(%ebp)
08098c7b +0x047:  jne    08098c87 <+0x53>
08098c7d +0x049:  mov    $0x70000003,%eax
08098c82 +0x04e:  jmp    08098db7 <+0x183>
08098c87 +0x053:  mov    0x8(%ebp),%eax
08098c8a +0x056:  mov    0x8(%eax),%eax
08098c8d +0x059:  mov    %eax,(%esp)
08098c90 +0x05c:  call   080c03a1 <_Z11SHA384_InitP15SHA384_ALG_INFO>  ; SHA384_Init(SHA384_ALG_INFO*)
08098c95 +0x061:  movl   $"rb",0x4(%esp)
08098c9d +0x069:  mov    0xc(%ebp),%eax
08098ca0 +0x06c:  mov    %eax,(%esp)
08098ca3 +0x06f:  call   0807e770 <_init+0x1068>
08098ca8 +0x074:  mov    %eax,-0x18(%ebp)
08098cab +0x077:  cmpl   $0x0,-0x18(%ebp)
08098caf +0x07b:  jne    08098cbb <+0x87>
08098cb1 +0x07d:  mov    $0x70000002,%eax
08098cb6 +0x082:  jmp    08098db7 <+0x183>
08098cbb +0x087:  movl   $0x2,0x8(%esp)
08098cc3 +0x08f:  movl   $0x0,0x4(%esp)
08098ccb +0x097:  mov    -0x18(%ebp),%eax
08098cce +0x09a:  mov    %eax,(%esp)
08098cd1 +0x09d:  call   0807e0b0 <_init+0x9a8>
08098cd6 +0x0a2:  mov    -0x18(%ebp),%eax
08098cd9 +0x0a5:  mov    %eax,(%esp)
08098cdc +0x0a8:  call   0807d9d0 <_init+0x2c8>
08098ce1 +0x0ad:  mov    %eax,-0x14(%ebp)
08098ce4 +0x0b0:  cmpl   $0x0,-0x14(%ebp)
08098ce8 +0x0b4:  jns    08098cff <+0xcb>
08098cea +0x0b6:  mov    -0x18(%ebp),%eax
08098ced +0x0b9:  mov    %eax,(%esp)
08098cf0 +0x0bc:  call   0807dea0 <_init+0x798>
08098cf5 +0x0c1:  mov    $0x70000003,%eax
08098cfa +0x0c6:  jmp    08098db7 <+0x183>
08098cff +0x0cb:  movl   $0x0,0x8(%esp)
08098d07 +0x0d3:  movl   $0x0,0x4(%esp)
08098d0f +0x0db:  mov    -0x18(%ebp),%eax
08098d12 +0x0de:  mov    %eax,(%esp)
08098d15 +0x0e1:  call   0807e0b0 <_init+0x9a8>
08098d1a +0x0e6:  movl   $0x0,-0x10(%ebp)
08098d21 +0x0ed:  jmp    08098d85 <+0x151>
08098d23 +0x0ef:  mov    -0x14(%ebp),%eax
08098d26 +0x0f2:  sub    -0x10(%ebp),%eax
08098d29 +0x0f5:  mov    %eax,-0xc(%ebp)
08098d2c +0x0f8:  cmpl   $0x400,-0xc(%ebp)
08098d33 +0x0ff:  jbe    08098d3c <+0x108>
08098d35 +0x101:  movl   $0x400,-0xc(%ebp)
08098d3c +0x108:  mov    -0x18(%ebp),%eax
08098d3f +0x10b:  mov    %eax,0xc(%esp)
08098d43 +0x10f:  movl   $0x1,0x8(%esp)
08098d4b +0x117:  mov    -0xc(%ebp),%eax
08098d4e +0x11a:  mov    %eax,0x4(%esp)
08098d52 +0x11e:  lea    -0x418(%ebp),%eax
08098d58 +0x124:  mov    %eax,(%esp)
08098d5b +0x127:  call   0807dd50 <_init+0x648>
08098d60 +0x12c:  mov    0x8(%ebp),%eax
08098d63 +0x12f:  mov    0x8(%eax),%eax
08098d66 +0x132:  mov    -0xc(%ebp),%edx
08098d69 +0x135:  mov    %edx,0x8(%esp)
08098d6d +0x139:  lea    -0x418(%ebp),%edx
08098d73 +0x13f:  mov    %edx,0x4(%esp)
08098d77 +0x143:  mov    %eax,(%esp)
08098d7a +0x146:  call   080c0469 <_Z13SHA384_UpdateP15SHA384_ALG_INFOPhm>  ; SHA384_Update(SHA384_ALG_INFO*, unsigned char*, unsigned long)
08098d7f +0x14b:  mov    -0xc(%ebp),%eax
08098d82 +0x14e:  add    %eax,-0x10(%ebp)
08098d85 +0x151:  mov    -0x14(%ebp),%eax
08098d88 +0x154:  cmp    -0x10(%ebp),%eax
08098d8b +0x157:  seta   %al
08098d8e +0x15a:  test   %al,%al
08098d90 +0x15c:  jne    08098d23 <+0xef>
08098d92 +0x15e:  mov    0x8(%ebp),%eax
08098d95 +0x161:  mov    0x8(%eax),%eax
08098d98 +0x164:  mov    0x10(%ebp),%edx
08098d9b +0x167:  mov    %edx,0x4(%esp)
08098d9f +0x16b:  mov    %eax,(%esp)
08098da2 +0x16e:  call   080c062e <_Z12SHA384_FinalP15SHA384_ALG_INFOPh>  ; SHA384_Final(SHA384_ALG_INFO*, unsigned char*)
08098da7 +0x173:  mov    -0x18(%ebp),%eax
08098daa +0x176:  mov    %eax,(%esp)
08098dad +0x179:  call   0807dea0 <_init+0x798>
08098db2 +0x17e:  mov    $0x6fffffff,%eax
08098db7 +0x183:  leave
08098db8 +0x184:  ret
08098db9 +0x185:  nop
```

## 反编译 C

```c
// CNChecksumSha384::MakeChecksumFromFile @ 0x8098c34

/* CNChecksumSha384::MakeChecksumFromFile(char const*, unsigned char*, int) */

undefined4 __thiscall
CNChecksumSha384::MakeChecksumFromFile
          (CNChecksumSha384 *this,char *param_1,uchar *param_2,int param_3)

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
      SHA384_Init(*(SHA384_ALG_INFO **)(this + 8));
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
            SHA384_Update(*(SHA384_ALG_INFO **)(this + 8),local_41c,local_10);
          }
          SHA384_Final(*(SHA384_ALG_INFO **)(this + 8),param_2);
          fclose(local_1c);
          uVar1 = 0x6fffffff;
        }
      }
    }
  }
  return uVar1;
}
```
