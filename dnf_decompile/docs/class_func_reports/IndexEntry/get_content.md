# get_content

`_ZN10IndexEntry11get_contentEP7PackSetmPhjPj`

`IndexEntry::get_content(PackSet*, unsigned long, unsigned char*, unsigned int, unsigned int*)`

| 类 | 地址 |
|---|---|
| `IndexEntry` | `0x08ac3eac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac3eac  _ZN10IndexEntry11get_contentEP7PackSetmPhjPj
#           IndexEntry::get_content(PackSet*, unsigned long, unsigned char*, unsigned int, unsigned int*)
# range [0x08ac3eac, 0x08ac41f5]
08ac3eac +0x000:  push   %ebp
08ac3ead +0x001:  mov    %esp,%ebp
08ac3eaf +0x003:  push   %ebx
08ac3eb0 +0x004:  sub    $0x24,%esp
08ac3eb3 +0x007:  cmpl   $0x0,0xc(%ebp)
08ac3eb7 +0x00b:  je     08ac3ec5 <+0x19>
08ac3eb9 +0x00d:  cmpl   $0x0,0x14(%ebp)
08ac3ebd +0x011:  je     08ac3ec5 <+0x19>
08ac3ebf +0x013:  cmpl   $0x0,0x1c(%ebp)
08ac3ec3 +0x017:  jne    08ac3efc <+0x50>
08ac3ec5 +0x019:  mov    &stdout,%eax
08ac3eca +0x01e:  movl   $&_ZZN10IndexEntry11get_contentEP7PackSetmPhjPjE12__FUNCTION__,0x10(%esp)
08ac3ed2 +0x026:  movl   $0x138,0xc(%esp)
08ac3eda +0x02e:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac3ee2 +0x036:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac3eea +0x03e:  mov    %eax,(%esp)
08ac3eed +0x041:  call   0807da90 <_init+0x388>
08ac3ef2 +0x046:  mov    $0x1,%eax
08ac3ef7 +0x04b:  jmp    08ac41f0 <+0x344>
08ac3efc +0x050:  mov    0xc(%ebp),%eax
08ac3eff +0x053:  mov    %eax,(%esp)
08ac3f02 +0x056:  call   08ac7674 <_ZN7PackSet18UsingEncryptedFileEv>  ; PackSet::UsingEncryptedFile()
08ac3f07 +0x05b:  test   %al,%al
08ac3f09 +0x05d:  je     08ac3f3e <+0x92>
08ac3f0b +0x05f:  mov    0x1c(%ebp),%eax
08ac3f0e +0x062:  mov    %eax,0x14(%esp)
08ac3f12 +0x066:  mov    0x18(%ebp),%eax
08ac3f15 +0x069:  mov    %eax,0x10(%esp)
08ac3f19 +0x06d:  mov    0x14(%ebp),%eax
08ac3f1c +0x070:  mov    %eax,0xc(%esp)
08ac3f20 +0x074:  mov    0x10(%ebp),%eax
08ac3f23 +0x077:  mov    %eax,0x8(%esp)
08ac3f27 +0x07b:  mov    0xc(%ebp),%eax
08ac3f2a +0x07e:  mov    %eax,0x4(%esp)
08ac3f2e +0x082:  mov    0x8(%ebp),%eax
08ac3f31 +0x085:  mov    %eax,(%esp)
08ac3f34 +0x088:  call   08ac41f6 <_ZN10IndexEntry24get_contentEncryptedFileEP7PackSetmPhjPj>  ; IndexEntry::get_contentEncryptedFile(PackSet*, unsigned long, unsigned char*, unsigned int, unsigned int*)
08ac3f39 +0x08d:  jmp    08ac41f0 <+0x344>
08ac3f3e +0x092:  mov    0x1c(%ebp),%eax
08ac3f41 +0x095:  movl   $0x0,(%eax)
08ac3f47 +0x09b:  mov    0xc(%ebp),%eax
08ac3f4a +0x09e:  mov    %eax,(%esp)
08ac3f4d +0x0a1:  call   08ac7608 <_ZN7PackSet9pack_fileEv>  ; PackSet::pack_file()
08ac3f52 +0x0a6:  test   %eax,%eax
08ac3f54 +0x0a8:  sete   %al
08ac3f57 +0x0ab:  test   %al,%al
08ac3f59 +0x0ad:  je     08ac3f92 <+0xe6>
08ac3f5b +0x0af:  mov    &stdout,%eax
08ac3f60 +0x0b4:  movl   $&_ZZN10IndexEntry11get_contentEP7PackSetmPhjPjE12__FUNCTION__,0x10(%esp)
08ac3f68 +0x0bc:  movl   $0x145,0xc(%esp)
08ac3f70 +0x0c4:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac3f78 +0x0cc:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac3f80 +0x0d4:  mov    %eax,(%esp)
08ac3f83 +0x0d7:  call   0807da90 <_init+0x388>
08ac3f88 +0x0dc:  mov    $0x1,%eax
08ac3f8d +0x0e1:  jmp    08ac41f0 <+0x344>
08ac3f92 +0x0e6:  mov    0x8(%ebp),%eax
08ac3f95 +0x0e9:  mov    0x8(%eax),%eax
08ac3f98 +0x0ec:  cmp    0x18(%ebp),%eax
08ac3f9b +0x0ef:  jbe    08ac3ff1 <+0x145>
08ac3f9d +0x0f1:  mov    &stdout,%eax
08ac3fa2 +0x0f6:  movl   $"buffer size is too small",0x8(%esp)
08ac3faa +0x0fe:  movl   $"%s\n",0x4(%esp)
08ac3fb2 +0x106:  mov    %eax,(%esp)
08ac3fb5 +0x109:  call   0807da90 <_init+0x388>
08ac3fba +0x10e:  mov    &stdout,%eax
08ac3fbf +0x113:  movl   $&_ZZN10IndexEntry11get_contentEP7PackSetmPhjPjE12__FUNCTION__,0x10(%esp)
08ac3fc7 +0x11b:  movl   $0x14b,0xc(%esp)
08ac3fcf +0x123:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac3fd7 +0x12b:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac3fdf +0x133:  mov    %eax,(%esp)
08ac3fe2 +0x136:  call   0807da90 <_init+0x388>
08ac3fe7 +0x13b:  mov    $0x1,%eax
08ac3fec +0x140:  jmp    08ac41f0 <+0x344>
08ac3ff1 +0x145:  mov    0x8(%ebp),%eax
08ac3ff4 +0x148:  mov    0x18(%eax),%eax
08ac3ff7 +0x14b:  test   %eax,%eax
08ac3ff9 +0x14d:  je     08ac401f <+0x173>
08ac3ffb +0x14f:  mov    0x8(%ebp),%eax
08ac3ffe +0x152:  mov    0xc(%eax),%edx
08ac4001 +0x155:  mov    0x8(%ebp),%eax
08ac4004 +0x158:  mov    0x18(%eax),%eax
08ac4007 +0x15b:  mov    %edx,0x8(%esp)
08ac400b +0x15f:  mov    %eax,0x4(%esp)
08ac400f +0x163:  mov    0x14(%ebp),%eax
08ac4012 +0x166:  mov    %eax,(%esp)
08ac4015 +0x169:  call   0807d8a0 <_init+0x198>
08ac401a +0x16e:  jmp    08ac4156 <+0x2aa>
08ac401f +0x173:  mov    0x8(%ebp),%eax
08ac4022 +0x176:  mov    (%eax),%eax
08ac4024 +0x178:  cmp    $0x1,%eax
08ac4027 +0x17b:  jne    08ac407d <+0x1d1>
08ac4029 +0x17d:  mov    &stdout,%eax
08ac402e +0x182:  movl   $"not implemented",0x8(%esp)
08ac4036 +0x18a:  movl   $"%s\n",0x4(%esp)
08ac403e +0x192:  mov    %eax,(%esp)
08ac4041 +0x195:  call   0807da90 <_init+0x388>
08ac4046 +0x19a:  mov    &stdout,%eax
08ac404b +0x19f:  movl   $&_ZZN10IndexEntry11get_contentEP7PackSetmPhjPjE12__FUNCTION__,0x10(%esp)
08ac4053 +0x1a7:  movl   $0x158,0xc(%esp)
08ac405b +0x1af:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac4063 +0x1b7:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac406b +0x1bf:  mov    %eax,(%esp)
08ac406e +0x1c2:  call   0807da90 <_init+0x388>
08ac4073 +0x1c7:  mov    $0x1,%eax
08ac4078 +0x1cc:  jmp    08ac41f0 <+0x344>
08ac407d +0x1d1:  mov    0x8(%ebp),%eax
08ac4080 +0x1d4:  mov    (%eax),%eax
08ac4082 +0x1d6:  test   %eax,%eax
08ac4084 +0x1d8:  jne    08ac4156 <+0x2aa>
08ac408a +0x1de:  mov    0x8(%ebp),%eax
08ac408d +0x1e1:  mov    0xc(%eax),%eax
08ac4090 +0x1e4:  test   %eax,%eax
08ac4092 +0x1e6:  je     08ac4156 <+0x2aa>
08ac4098 +0x1ec:  mov    0xc(%ebp),%eax
08ac409b +0x1ef:  mov    %eax,(%esp)
08ac409e +0x1f2:  call   08ac4930 <_ZN7PackSet11header_sizeEv>  ; PackSet::header_size()
08ac40a3 +0x1f7:  mov    0x8(%ebp),%edx
08ac40a6 +0x1fa:  mov    0x14(%edx),%edx
08ac40a9 +0x1fd:  add    %edx,%eax
08ac40ab +0x1ff:  mov    %eax,%ebx
08ac40ad +0x201:  mov    0xc(%ebp),%eax
08ac40b0 +0x204:  mov    %eax,(%esp)
08ac40b3 +0x207:  call   08ac7608 <_ZN7PackSet9pack_fileEv>  ; PackSet::pack_file()
08ac40b8 +0x20c:  movl   $0x0,0x8(%esp)
08ac40c0 +0x214:  mov    %ebx,0x4(%esp)
08ac40c4 +0x218:  mov    %eax,(%esp)
08ac40c7 +0x21b:  call   0807e0b0 <_init+0x9a8>
08ac40cc +0x220:  mov    0xc(%ebp),%eax
08ac40cf +0x223:  mov    %eax,(%esp)
08ac40d2 +0x226:  call   08ac7608 <_ZN7PackSet9pack_fileEv>  ; PackSet::pack_file()
08ac40d7 +0x22b:  mov    0x8(%ebp),%edx
08ac40da +0x22e:  mov    0xc(%edx),%edx
08ac40dd +0x231:  mov    %eax,0xc(%esp)
08ac40e1 +0x235:  movl   $0x1,0x8(%esp)
08ac40e9 +0x23d:  mov    %edx,0x4(%esp)
08ac40ed +0x241:  mov    0x14(%ebp),%eax
08ac40f0 +0x244:  mov    %eax,(%esp)
08ac40f3 +0x247:  call   0807dd50 <_init+0x648>
08ac40f8 +0x24c:  cmp    $0x1,%eax
08ac40fb +0x24f:  setne  %al
08ac40fe +0x252:  test   %al,%al
08ac4100 +0x254:  je     08ac4156 <+0x2aa>
08ac4102 +0x256:  mov    &stdout,%eax
08ac4107 +0x25b:  movl   $"fread failed",0x8(%esp)
08ac410f +0x263:  movl   $"%s\n",0x4(%esp)
08ac4117 +0x26b:  mov    %eax,(%esp)
08ac411a +0x26e:  call   0807da90 <_init+0x388>
08ac411f +0x273:  mov    &stdout,%eax
08ac4124 +0x278:  movl   $&_ZZN10IndexEntry11get_contentEP7PackSetmPhjPjE12__FUNCTION__,0x10(%esp)
08ac412c +0x280:  movl   $0x163,0xc(%esp)
08ac4134 +0x288:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac413c +0x290:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac4144 +0x298:  mov    %eax,(%esp)
08ac4147 +0x29b:  call   0807da90 <_init+0x388>
08ac414c +0x2a0:  mov    $0x1,%eax
08ac4151 +0x2a5:  jmp    08ac41f0 <+0x344>
08ac4156 +0x2aa:  mov    0x8(%ebp),%eax
08ac4159 +0x2ad:  mov    0x8(%eax),%edx
08ac415c +0x2b0:  mov    0x1c(%ebp),%eax
08ac415f +0x2b3:  mov    %edx,(%eax)
08ac4161 +0x2b5:  mov    0x8(%ebp),%eax
08ac4164 +0x2b8:  mov    0xc(%eax),%ecx
08ac4167 +0x2bb:  mov    0x8(%ebp),%eax
08ac416a +0x2be:  mov    0x10(%eax),%edx
08ac416d +0x2c1:  mov    0x8(%ebp),%eax
08ac4170 +0x2c4:  mov    0x10(%eax),%eax
08ac4173 +0x2c7:  mov    %ecx,0x10(%esp)
08ac4177 +0x2cb:  mov    0x14(%ebp),%ecx
08ac417a +0x2ce:  mov    %ecx,0xc(%esp)
08ac417e +0x2d2:  mov    %edx,0x8(%esp)
08ac4182 +0x2d6:  mov    %eax,0x4(%esp)
08ac4186 +0x2da:  mov    0x10(%ebp),%eax
08ac4189 +0x2dd:  mov    %eax,(%esp)
08ac418c +0x2e0:  call   08ac398b <_ZL16_decrypt_N_crc32mmmPhj>  ; _decrypt_N_crc32(unsigned long, unsigned long, unsigned long, unsigned char*, unsigned int)
08ac4191 +0x2e5:  test   %eax,%eax
08ac4193 +0x2e7:  sete   %al
08ac4196 +0x2ea:  test   %al,%al
08ac4198 +0x2ec:  je     08ac41eb <+0x33f>
08ac419a +0x2ee:  mov    &stdout,%eax
08ac419f +0x2f3:  movl   $"CRC failed",0x8(%esp)
08ac41a7 +0x2fb:  movl   $"%s\n",0x4(%esp)
08ac41af +0x303:  mov    %eax,(%esp)
08ac41b2 +0x306:  call   0807da90 <_init+0x388>
08ac41b7 +0x30b:  mov    &stdout,%eax
08ac41bc +0x310:  movl   $&_ZZN10IndexEntry11get_contentEP7PackSetmPhjPjE12__FUNCTION__,0x10(%esp)
08ac41c4 +0x318:  movl   $0x16e,0xc(%esp)
08ac41cc +0x320:  movl   $"../../Include/FilePack/Pack.cpp",0x8(%esp)
08ac41d4 +0x328:  movl   $"%s(%d) - %s\n",0x4(%esp)
08ac41dc +0x330:  mov    %eax,(%esp)
08ac41df +0x333:  call   0807da90 <_init+0x388>
08ac41e4 +0x338:  mov    $0x1,%eax
08ac41e9 +0x33d:  jmp    08ac41f0 <+0x344>
08ac41eb +0x33f:  mov    $0x0,%eax
08ac41f0 +0x344:  add    $0x24,%esp
08ac41f3 +0x347:  pop    %ebx
08ac41f4 +0x348:  pop    %ebp
08ac41f5 +0x349:  ret
```

## 反编译 C

```c
// IndexEntry::get_content @ 0x8ac3eac

/* DWARF original prototype: pack_ret_t get_content(IndexEntry * this, PackSet * owner, hash_t code,
   uchar * dst, uint dst_size, uint * content_size) */

pack_ret_t __thiscall
IndexEntry::get_content
          (IndexEntry *this,PackSet *owner,hash_t code,uchar *dst,uint dst_size,uint *content_size)

{
  uint uVar1;
  bool bVar2;
  pack_ret_t pVar3;
  FILE *pFVar4;
  uint uVar5;
  size_t sVar6;
  int iVar7;
  
  if (((owner == (PackSet *)0x0) || (dst == (uchar *)0x0)) || (content_size == (uint *)0x0)) {
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x138,"get_content");
    pVar3 = PACK_ERROR;
  }
  else {
    bVar2 = PackSet::UsingEncryptedFile(owner);
    if (bVar2) {
      pVar3 = get_contentEncryptedFile(this,owner,code,dst,dst_size,content_size);
    }
    else {
      *content_size = 0;
      pFVar4 = PackSet::pack_file(owner);
      if (pFVar4 == (FILE *)0x0) {
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x145,"get_content");
        pVar3 = PACK_ERROR;
      }
      else if (dst_size < this->size_) {
        fprintf(stdout,"%s\n","buffer size is too small");
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x14b,"get_content");
        pVar3 = PACK_ERROR;
      }
      else {
        if (this->content_ == (uchar *)0x0) {
          if (this->type_ == ENTRY_FILE) {
            fprintf(stdout,"%s\n","not implemented");
            fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x158,"get_content");
            return PACK_ERROR;
          }
          if ((this->type_ == ENTRY_PACK) && (this->aligned_size_ != 0)) {
            uVar5 = PackSet::header_size(owner);
            uVar1 = this->offset_;
            pFVar4 = PackSet::pack_file(owner);
            fseek((FILE *)pFVar4,uVar5 + uVar1,0);
            pFVar4 = PackSet::pack_file(owner);
            sVar6 = fread(dst,this->aligned_size_,1,(FILE *)pFVar4);
            if (sVar6 != 1) {
              fprintf(stdout,"%s\n","fread failed");
              fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x163,"get_content");
              return PACK_ERROR;
            }
          }
        }
        else {
          memcpy(dst,this->content_,this->aligned_size_);
        }
        *content_size = this->size_;
        iVar7 = _decrypt_N_crc32(code,this->crc_,this->crc_,dst,this->aligned_size_);
        if (iVar7 == 0) {
          fprintf(stdout,"%s\n","CRC failed");
          fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x16e,"get_content");
          pVar3 = PACK_ERROR;
        }
        else {
          pVar3 = PACK_OK;
        }
      }
    }
  }
  return pVar3;
}
```
