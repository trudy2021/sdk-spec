// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: identity_state.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Com.Elarian.Hera.Proto {

  /// <summary>Holder for reflection information generated from identity_state.proto</summary>
  public static partial class IdentityStateReflection {

    #region Descriptor
    /// <summary>File descriptor for identity_state.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static IdentityStateReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "ChRpZGVudGl0eV9zdGF0ZS5wcm90bxIWY29tLmVsYXJpYW4uaGVyYS5wcm90",
            "bxoSY29tbW9uX21vZGVsLnByb3RvIqACCg1JZGVudGl0eVN0YXRlEjMKBHRh",
            "Z3MYASADKAsyJS5jb20uZWxhcmlhbi5oZXJhLnByb3RvLkN1c3RvbWVySW5k",
            "ZXgSRQoIbWV0YWRhdGEYAiADKAsyMy5jb20uZWxhcmlhbi5oZXJhLnByb3Rv",
            "LklkZW50aXR5U3RhdGUuTWV0YWRhdGFFbnRyeRI8Cg1zZWNvbmRhcnlfaWRz",
            "GAMgAygLMiUuY29tLmVsYXJpYW4uaGVyYS5wcm90by5DdXN0b21lckluZGV4",
            "GlUKDU1ldGFkYXRhRW50cnkSCwoDa2V5GAEgASgJEjMKBXZhbHVlGAIgASgL",
            "MiQuY29tLmVsYXJpYW4uaGVyYS5wcm90by5EYXRhTWFwVmFsdWU6AjgBYgZw",
            "cm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Com.Elarian.Hera.Proto.CommonModelReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Com.Elarian.Hera.Proto.IdentityState), global::Com.Elarian.Hera.Proto.IdentityState.Parser, new[]{ "Tags", "Metadata", "SecondaryIds" }, null, null, null, new pbr::GeneratedClrTypeInfo[] { null, })
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class IdentityState : pb::IMessage<IdentityState>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<IdentityState> _parser = new pb::MessageParser<IdentityState>(() => new IdentityState());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<IdentityState> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Com.Elarian.Hera.Proto.IdentityStateReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public IdentityState() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public IdentityState(IdentityState other) : this() {
      tags_ = other.tags_.Clone();
      metadata_ = other.metadata_.Clone();
      secondaryIds_ = other.secondaryIds_.Clone();
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public IdentityState Clone() {
      return new IdentityState(this);
    }

    /// <summary>Field number for the "tags" field.</summary>
    public const int TagsFieldNumber = 1;
    private static readonly pb::FieldCodec<global::Com.Elarian.Hera.Proto.CustomerIndex> _repeated_tags_codec
        = pb::FieldCodec.ForMessage(10, global::Com.Elarian.Hera.Proto.CustomerIndex.Parser);
    private readonly pbc::RepeatedField<global::Com.Elarian.Hera.Proto.CustomerIndex> tags_ = new pbc::RepeatedField<global::Com.Elarian.Hera.Proto.CustomerIndex>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<global::Com.Elarian.Hera.Proto.CustomerIndex> Tags {
      get { return tags_; }
    }

    /// <summary>Field number for the "metadata" field.</summary>
    public const int MetadataFieldNumber = 2;
    private static readonly pbc::MapField<string, global::Com.Elarian.Hera.Proto.DataMapValue>.Codec _map_metadata_codec
        = new pbc::MapField<string, global::Com.Elarian.Hera.Proto.DataMapValue>.Codec(pb::FieldCodec.ForString(10, ""), pb::FieldCodec.ForMessage(18, global::Com.Elarian.Hera.Proto.DataMapValue.Parser), 18);
    private readonly pbc::MapField<string, global::Com.Elarian.Hera.Proto.DataMapValue> metadata_ = new pbc::MapField<string, global::Com.Elarian.Hera.Proto.DataMapValue>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::MapField<string, global::Com.Elarian.Hera.Proto.DataMapValue> Metadata {
      get { return metadata_; }
    }

    /// <summary>Field number for the "secondary_ids" field.</summary>
    public const int SecondaryIdsFieldNumber = 3;
    private static readonly pb::FieldCodec<global::Com.Elarian.Hera.Proto.CustomerIndex> _repeated_secondaryIds_codec
        = pb::FieldCodec.ForMessage(26, global::Com.Elarian.Hera.Proto.CustomerIndex.Parser);
    private readonly pbc::RepeatedField<global::Com.Elarian.Hera.Proto.CustomerIndex> secondaryIds_ = new pbc::RepeatedField<global::Com.Elarian.Hera.Proto.CustomerIndex>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<global::Com.Elarian.Hera.Proto.CustomerIndex> SecondaryIds {
      get { return secondaryIds_; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as IdentityState);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(IdentityState other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if(!tags_.Equals(other.tags_)) return false;
      if (!Metadata.Equals(other.Metadata)) return false;
      if(!secondaryIds_.Equals(other.secondaryIds_)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      hash ^= tags_.GetHashCode();
      hash ^= Metadata.GetHashCode();
      hash ^= secondaryIds_.GetHashCode();
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void WriteTo(pb::CodedOutputStream output) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      output.WriteRawMessage(this);
    #else
      tags_.WriteTo(output, _repeated_tags_codec);
      metadata_.WriteTo(output, _map_metadata_codec);
      secondaryIds_.WriteTo(output, _repeated_secondaryIds_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      tags_.WriteTo(ref output, _repeated_tags_codec);
      metadata_.WriteTo(ref output, _map_metadata_codec);
      secondaryIds_.WriteTo(ref output, _repeated_secondaryIds_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      size += tags_.CalculateSize(_repeated_tags_codec);
      size += metadata_.CalculateSize(_map_metadata_codec);
      size += secondaryIds_.CalculateSize(_repeated_secondaryIds_codec);
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(IdentityState other) {
      if (other == null) {
        return;
      }
      tags_.Add(other.tags_);
      metadata_.Add(other.metadata_);
      secondaryIds_.Add(other.secondaryIds_);
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(pb::CodedInputStream input) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      input.ReadRawMessage(this);
    #else
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 10: {
            tags_.AddEntriesFrom(input, _repeated_tags_codec);
            break;
          }
          case 18: {
            metadata_.AddEntriesFrom(input, _map_metadata_codec);
            break;
          }
          case 26: {
            secondaryIds_.AddEntriesFrom(input, _repeated_secondaryIds_codec);
            break;
          }
        }
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
            break;
          case 10: {
            tags_.AddEntriesFrom(ref input, _repeated_tags_codec);
            break;
          }
          case 18: {
            metadata_.AddEntriesFrom(ref input, _map_metadata_codec);
            break;
          }
          case 26: {
            secondaryIds_.AddEntriesFrom(ref input, _repeated_secondaryIds_codec);
            break;
          }
        }
      }
    }
    #endif

  }

  #endregion

}

#endregion Designer generated code
