# MakeChecksumFromFile

`_ZN13CNChecksumMd520MakeChecksumFromFileEPKcPhi`

`CNChecksumMd5::MakeChecksumFromFile(char const*, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumMd5` | `0x0809846a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809846a  _ZN13CNChecksumMd520MakeChecksumFromFileEPKcPhi
#           CNChecksumMd5::MakeChecksumFromFile(char const*, unsigned char*, int)
# range [0x0809846a, 0x080985ef]
0809846a +0x000:  push   %ebp
0809846b +0x001:  mov    %esp,%ebp
0809846d +0x003:  sub    $0x428,%esp
08098473 +0x009:  mov    0x8(%ebp),%eax
08098476 +0x00c:  mov    0x8(%eax),%eax
08098479 +0x00f:  test   %eax,%eax
0809847b +0x011:  jne    08098487 <+0x1d>
0809847d +0x013:  mov    $0x70000000,%eax
08098482 +0x018:  jmp    080985ed <+0x183>
08098487 +0x01d:  mov    0x8(%ebp),%eax
0809848a +0x020:  mov    (%eax),%eax
0809848c +0x022:  add    $0x20,%eax
0809848f +0x025:  mov    (%eax),%edx
08098491 +0x027:  mov    0x8(%ebp),%eax
08098494 +0x02a:  mov    %eax,(%esp)
08098497 +0x02d:  call   *%edx
08098499 +0x02f:  cmp    0x14(%ebp),%eax
0809849c +0x032:  setg   %al
0809849f +0x035:  test   %al,%al
080984a1 +0x037:  je     080984ad <+0x43>
080984a3 +0x039:  mov    $0x70000001,%eax
080984a8 +0x03e:  jmp    080985ed <+0x183>
080984ad +0x043:  cmpl   $0x0,0xc(%ebp)
080984b1 +0x047:  jne    080984bd <+0x53>
080984b3 +0x049:  mov    $0x70000003,%eax
080984b8 +0x04e:  jmp    080985ed <+0x183>
080984bd +0x053:  movl   $"rb",0x4(%esp)
080984c5 +0x05b:  mov    0xc(%ebp),%eax
080984c8 +0x05e:  mov    %eax,(%esp)
080984cb +0x061:  call   0807e770 <_init+0x1068>
080984d0 +0x066:  mov    %eax,-0x18(%ebp)
080984d3 +0x069:  cmpl   $0x0,-0x18(%ebp)
080984d7 +0x06d:  jne    080984e3 <+0x79>
080984d9 +0x06f:  mov    $0x70000002,%eax
080984de +0x074:  jmp    080985ed <+0x183>
080984e3 +0x079:  movl   $0x2,0x8(%esp)
080984eb +0x081:  movl   $0x0,0x4(%esp)
080984f3 +0x089:  mov    -0x18(%ebp),%eax
080984f6 +0x08c:  mov    %eax,(%esp)
080984f9 +0x08f:  call   0807e0b0 <_init+0x9a8>
080984fe +0x094:  mov    -0x18(%ebp),%eax
08098501 +0x097:  mov    %eax,(%esp)
08098504 +0x09a:  call   0807d9d0 <_init+0x2c8>
08098509 +0x09f:  mov    %eax,-0x14(%ebp)
0809850c +0x0a2:  cmpl   $0x0,-0x14(%ebp)
08098510 +0x0a6:  jns    08098527 <+0xbd>
08098512 +0x0a8:  mov    -0x18(%ebp),%eax
08098515 +0x0ab:  mov    %eax,(%esp)
08098518 +0x0ae:  call   0807dea0 <_init+0x798>
0809851d +0x0b3:  mov    $0x70000003,%eax
08098522 +0x0b8:  jmp    080985ed <+0x183>
08098527 +0x0bd:  movl   $0x0,0x8(%esp)
0809852f +0x0c5:  movl   $0x0,0x4(%esp)
08098537 +0x0cd:  mov    -0x18(%ebp),%eax
0809853a +0x0d0:  mov    %eax,(%esp)
0809853d +0x0d3:  call   0807e0b0 <_init+0x9a8>
08098542 +0x0d8:  mov    0x8(%ebp),%eax
08098545 +0x0db:  mov    0x8(%eax),%eax
08098548 +0x0de:  mov    %eax,(%esp)
0809854b +0x0e1:  call   080b2ae0 <_Z10md5_startsP11md5_context>  ; md5_starts(md5_context*)
08098550 +0x0e6:  movl   $0x0,-0xc(%ebp)
08098557 +0x0ed:  jmp    080985bb <+0x151>
08098559 +0x0ef:  mov    -0x14(%ebp),%eax
0809855c +0x0f2:  sub    -0xc(%ebp),%eax
0809855f +0x0f5:  mov    %eax,-0x10(%ebp)
08098562 +0x0f8:  cmpl   $0x400,-0x10(%ebp)
08098569 +0x0ff:  jbe    08098572 <+0x108>
0809856b +0x101:  movl   $0x400,-0x10(%ebp)
08098572 +0x108:  mov    -0x18(%ebp),%eax
08098575 +0x10b:  mov    %eax,0xc(%esp)
08098579 +0x10f:  movl   $0x1,0x8(%esp)
08098581 +0x117:  mov    -0x10(%ebp),%eax
08098584 +0x11a:  mov    %eax,0x4(%esp)
08098588 +0x11e:  lea    -0x418(%ebp),%eax
0809858e +0x124:  mov    %eax,(%esp)
08098591 +0x127:  call   0807dd50 <_init+0x648>
08098596 +0x12c:  mov    -0x10(%ebp),%edx
08098599 +0x12f:  mov    0x8(%ebp),%eax
0809859c +0x132:  mov    0x8(%eax),%eax
0809859f +0x135:  mov    %edx,0x8(%esp)
080985a3 +0x139:  lea    -0x418(%ebp),%edx
080985a9 +0x13f:  mov    %edx,0x4(%esp)
080985ad +0x143:  mov    %eax,(%esp)
080985b0 +0x146:  call   080b3a8d <_Z10md5_updateP11md5_contextPhi>  ; md5_update(md5_context*, unsigned char*, int)
080985b5 +0x14b:  mov    -0x10(%ebp),%eax
080985b8 +0x14e:  add    %eax,-0xc(%ebp)
080985bb +0x151:  mov    -0x14(%ebp),%eax
080985be +0x154:  cmp    -0xc(%ebp),%eax
080985c1 +0x157:  seta   %al
080985c4 +0x15a:  test   %al,%al
080985c6 +0x15c:  jne    08098559 <+0xef>
080985c8 +0x15e:  mov    0x8(%ebp),%eax
080985cb +0x161:  mov    0x8(%eax),%eax
080985ce +0x164:  mov    0x10(%ebp),%edx
080985d1 +0x167:  mov    %edx,0x4(%esp)
080985d5 +0x16b:  mov    %eax,(%esp)
080985d8 +0x16e:  call   080b3b8d <_Z10md5_finishP11md5_contextPh>  ; md5_finish(md5_context*, unsigned char*)
080985dd +0x173:  mov    -0x18(%ebp),%eax
080985e0 +0x176:  mov    %eax,(%esp)
080985e3 +0x179:  call   0807dea0 <_init+0x798>
080985e8 +0x17e:  mov    $0x6fffffff,%eax
080985ed +0x183:  leave
080985ee +0x184:  ret
080985ef +0x185:  nop
```

## 反编译 C

```c
// CNChecksumMd5::MakeChecksumFromFile @ 0x809846a

/* CNChecksumMd5::MakeChecksumFromFile(char const*, unsigned char*, int) */

undefined4 __thiscall
CNChecksumMd5::MakeChecksumFromFile(CNChecksumMd5 *this,char *param_1,uchar *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uchar local_41c [1024];
  FILE *local_1c;
  uint local_18;
  size_t local_14;
  uint local_10;
  
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
          md5_starts(*(md5_context **)(this + 8));
          for (local_10 = 0; local_10 < local_18; local_10 = local_10 + local_14) {
            local_14 = local_18 - local_10;
            if (0x400 < local_14) {
              local_14 = 0x400;
            }
            fread(local_41c,local_14,1,local_1c);
            md5_update(*(md5_context **)(this + 8),local_41c,local_14);
          }
          md5_finish(*(md5_context **)(this + 8),param_2);
          fclose(local_1c);
          uVar1 = 0x6fffffff;
        }
      }
    }
  }
  return uVar1;
}
```
