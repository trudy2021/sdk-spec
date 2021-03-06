<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: messaging_model.proto

namespace Com\Elarian\Hera\Proto;

use UnexpectedValueException;

/**
 * Protobuf type <code>com.elarian.hera.proto.VoiceCallStatus</code>
 */
class VoiceCallStatus
{
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_UNSPECIFIED = 0;</code>
     */
    const VOICE_CALL_STATUS_UNSPECIFIED = 0;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_QUEUED = 100;</code>
     */
    const VOICE_CALL_STATUS_QUEUED = 100;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_ANSWERED = 101;</code>
     */
    const VOICE_CALL_STATUS_ANSWERED = 101;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_RINGING = 102;</code>
     */
    const VOICE_CALL_STATUS_RINGING = 102;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_ACTIVE = 200;</code>
     */
    const VOICE_CALL_STATUS_ACTIVE = 200;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_DIALING = 201;</code>
     */
    const VOICE_CALL_STATUS_DIALING = 201;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_DIAL_COMPLETED = 202;</code>
     */
    const VOICE_CALL_STATUS_DIAL_COMPLETED = 202;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_BRIDGED = 203;</code>
     */
    const VOICE_CALL_STATUS_BRIDGED = 203;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_ENQUEUED = 204;</code>
     */
    const VOICE_CALL_STATUS_ENQUEUED = 204;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_DEQUEUED = 205;</code>
     */
    const VOICE_CALL_STATUS_DEQUEUED = 205;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_TRANSFERRED = 206;</code>
     */
    const VOICE_CALL_STATUS_TRANSFERRED = 206;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_TRANSFER_COMPLETED = 207;</code>
     */
    const VOICE_CALL_STATUS_TRANSFER_COMPLETED = 207;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_COMPLETED = 300;</code>
     */
    const VOICE_CALL_STATUS_COMPLETED = 300;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_INSUFFICIENT_CREDIT = 400;</code>
     */
    const VOICE_CALL_STATUS_INSUFFICIENT_CREDIT = 400;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_NOT_ANSWERED = 401;</code>
     */
    const VOICE_CALL_STATUS_NOT_ANSWERED = 401;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_INVALID_PHONE_NUMBER = 402;</code>
     */
    const VOICE_CALL_STATUS_INVALID_PHONE_NUMBER = 402;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_DESTINATION_NOT_SUPPORTED = 403;</code>
     */
    const VOICE_CALL_STATUS_DESTINATION_NOT_SUPPORTED = 403;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_DECOMMISSIONED_CUSTOMERID = 404;</code>
     */
    const VOICE_CALL_STATUS_DECOMMISSIONED_CUSTOMERID = 404;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_EXPIRED = 405;</code>
     */
    const VOICE_CALL_STATUS_EXPIRED = 405;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_INVALID_CHANNEL_NUMBER = 406;</code>
     */
    const VOICE_CALL_STATUS_INVALID_CHANNEL_NUMBER = 406;
    /**
     * Generated from protobuf enum <code>VOICE_CALL_STATUS_APPLICATION_ERROR = 501;</code>
     */
    const VOICE_CALL_STATUS_APPLICATION_ERROR = 501;

    private static $valueToName = [
        self::VOICE_CALL_STATUS_UNSPECIFIED => 'VOICE_CALL_STATUS_UNSPECIFIED',
        self::VOICE_CALL_STATUS_QUEUED => 'VOICE_CALL_STATUS_QUEUED',
        self::VOICE_CALL_STATUS_ANSWERED => 'VOICE_CALL_STATUS_ANSWERED',
        self::VOICE_CALL_STATUS_RINGING => 'VOICE_CALL_STATUS_RINGING',
        self::VOICE_CALL_STATUS_ACTIVE => 'VOICE_CALL_STATUS_ACTIVE',
        self::VOICE_CALL_STATUS_DIALING => 'VOICE_CALL_STATUS_DIALING',
        self::VOICE_CALL_STATUS_DIAL_COMPLETED => 'VOICE_CALL_STATUS_DIAL_COMPLETED',
        self::VOICE_CALL_STATUS_BRIDGED => 'VOICE_CALL_STATUS_BRIDGED',
        self::VOICE_CALL_STATUS_ENQUEUED => 'VOICE_CALL_STATUS_ENQUEUED',
        self::VOICE_CALL_STATUS_DEQUEUED => 'VOICE_CALL_STATUS_DEQUEUED',
        self::VOICE_CALL_STATUS_TRANSFERRED => 'VOICE_CALL_STATUS_TRANSFERRED',
        self::VOICE_CALL_STATUS_TRANSFER_COMPLETED => 'VOICE_CALL_STATUS_TRANSFER_COMPLETED',
        self::VOICE_CALL_STATUS_COMPLETED => 'VOICE_CALL_STATUS_COMPLETED',
        self::VOICE_CALL_STATUS_INSUFFICIENT_CREDIT => 'VOICE_CALL_STATUS_INSUFFICIENT_CREDIT',
        self::VOICE_CALL_STATUS_NOT_ANSWERED => 'VOICE_CALL_STATUS_NOT_ANSWERED',
        self::VOICE_CALL_STATUS_INVALID_PHONE_NUMBER => 'VOICE_CALL_STATUS_INVALID_PHONE_NUMBER',
        self::VOICE_CALL_STATUS_DESTINATION_NOT_SUPPORTED => 'VOICE_CALL_STATUS_DESTINATION_NOT_SUPPORTED',
        self::VOICE_CALL_STATUS_DECOMMISSIONED_CUSTOMERID => 'VOICE_CALL_STATUS_DECOMMISSIONED_CUSTOMERID',
        self::VOICE_CALL_STATUS_EXPIRED => 'VOICE_CALL_STATUS_EXPIRED',
        self::VOICE_CALL_STATUS_INVALID_CHANNEL_NUMBER => 'VOICE_CALL_STATUS_INVALID_CHANNEL_NUMBER',
        self::VOICE_CALL_STATUS_APPLICATION_ERROR => 'VOICE_CALL_STATUS_APPLICATION_ERROR',
    ];

    public static function name($value)
    {
        if (!isset(self::$valueToName[$value])) {
            throw new UnexpectedValueException(sprintf(
                    'Enum %s has no name defined for value %s', __CLASS__, $value));
        }
        return self::$valueToName[$value];
    }


    public static function value($name)
    {
        $const = __CLASS__ . '::' . strtoupper($name);
        if (!defined($const)) {
            throw new UnexpectedValueException(sprintf(
                    'Enum %s has no value defined for name %s', __CLASS__, $name));
        }
        return constant($const);
    }
}

